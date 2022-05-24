#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"


void freeLinkedList_h(listNode** L) {
	listNode* p;
	while ((*L) != NULL) {
		p = (*L);
		(*L) = (*L)->link;
		free(p);
		p = NULL;
	}
}

void printList(listNode** L) {
	listNode* p;
	printf("L=(");
	p = (*L);
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(",");
	}
	printf(")\n");
}

void insertFirstNode(listNode** L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = (*L);
	(*L) = newNode;
}

void insertMiddleNode(listNode** L, listNode* pre, char* x) {	// '노드 삭제' 함수와는 다르게 탐색으로 찾아낸 노드를 새노드의 앞노드로 활용
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if ((*L) == NULL) {
		newNode->link = NULL;
		(*L) = newNode;
	}
	else if (pre == NULL) {
		newNode->link = (*L);
		(*L) = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}


void insertLastNode(listNode** L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if ((*L) == NULL) {
		(*L) = newNode;
		return L;
	}

	temp = (*L);
	while (temp->link != NULL) temp = temp->link;
	temp->link = newNode;
	return;
}


// 노드 삭제하기
void deleteNode(listNode** L, listNode* p) {		// p는 '노드 탐색'을 통해 찾은 삭제를 원하는 노드 ,  노드탐색을 삭제할 노드를 찾기 위해 사용함

	listNode* pre;
	if ((*L) == NULL) return;					// (1) 공백일때
	if ((*L)->link == NULL) {					// (2) 노드가 한개만 존재할때(삭제할게 하나밖에 없을때)
		free((*L));								//     첫번째 노드, 동적할당 해제
		(*L) = NULL;								//     가리키는 노드가 사라졌으므로 Head에 NULL
		return;
	}
	else if (p == NULL) return;						// (3) 찾은 노드가 NULL, 원하는 노드를 못찾았을때
	else {											// (4) 그 외 노드가 여러개가 존재하고 삭제할 노드 탐색이 제대로 됐을때
		pre = (*L);								//	   첫번째 노드부터 탐색 시작
		while (pre->link != p) {					//     현재  pre 노드의 링크필드가 삭제할 노드와 같을 때까지 반복
			pre = pre->link;						//     pre가 가리키는 노드의 링크필드가 삭제할 노드를 가리키게 되면 반복문해제 
		}											//     
		pre->link = p->link;						//	   pre가 삭제할 노드의 다음 노드를 가리키도록 함
		free(p);									//     삭제할 노드 동적할당 해제
	}
}


// 원하는 노드 탐색하기
listNode* searchNode(listNode** L, char* x) {
	listNode* temp;
	temp = (*L);
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;	// strcmp 반환값 음수(str1<str2), 양수(str1>str2), 0(str1==str2) 3가지
		else temp = temp->link;							// 찾던 데이터하고 같으면 temp를 그대로 반환, 아니면 다음 노드로 넘어감
	}
	return temp;										// 마지막 노드까지 확인하다가 없으면 그냥 temp(==NULL) 반환
}


// 노드 순서 정반대로 바꾸기
void reverse(listNode** L) {

	listNode* p;
	listNode* q;
	listNode* r;			// (가장 앞의 노드)r -> q(중간 노드) -> p(가장 뒤의 노드) 순서로 각각 노드를 가리킴 

	p = (*L);			// 맨 처음엔 p가 첫번째 노드를 가리킴
	q = NULL;				
	r = NULL;

	while (p != NULL) {		// p가 마지막 노드에 도달할 때까지
		r = q;				// 
		q = p;				// r, q, p 가 한 노드씩 오른쪽(뒤쪽)으로 옮겨감
		p = p->link;		//
		q->link = r;		// 핵심, r이 q를 가리키는 것(바꾸기 전엔 r이 더 왼쪽에 있으므로 q를 가리킴)을 q가 r을 가리키도록 만들어주는 것
	}
	(*L) = q;			// 마지막으로 가장 오른쪽에 있던 노드(마지막 노드)를 헤드가 가리키게 하면서 순서가 정반대로 바뀌게 됨
}