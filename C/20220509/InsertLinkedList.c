#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "InsertLinkedList.h"

//공백 연결 리스트를 생성하는 함수
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;									// 포인터변수 L 생성
	L = (linkedList_h*)malloc(sizeof(linkedList_h));	// Head를 동적할당으로 만들어줌 (?? 글쓴이의 의도는 잘 모르겠으나 불필요함 )
	L->head = NULL;										// 공백 연결리스트 이므로 가리키는 노드 없음
	return L;											// 동적할당으로 생성된 공간의 주소를 반환
}


// 모든 노드 제거 (동적할당된 저장공간 제거)
void freeLinkedList_h(linkedList_h* L) {

	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}


// 모든 노드의 값을 순차적으로 출력
void printList(linkedList_h* L) {

	listNode* p;
	printf("L=( ");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL)printf(",");
	}
	printf(" )\n");
}


// 새로운 노드를 첫번째 노드로 삽입(Head 바로 다음)
void insertFirstNode(linkedList_h* L, char* x) {

	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	 // 새로운 노드 생성
	strcpy(newNode->data, x);						 // 데이터 입력
	newNode->link = L->head;						 // Head가 가리키는 노드(원래 첫번째 노드)의 주소를 새로운 노드의 링크필드에 저장
	L->head = newNode;								 // 새로운 노드의 주소를 Head에 저장
}


// 새로운 노드를 연결리스트의 중간에 삽입
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {

	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	// 새로운 노드 생성
	strcpy(newNode->data, x);						// 데이터 입력
	if (L->head == NULL) {							// 공백 연결리스트이면 --> 새로운 노드의 링크필드에 NULL(첫번째이자 마지막 노드이므로)
													//						  Head에 새로운 노드의 주소 저장 [ Head -> 새로운 노드 ]
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) {							// pre가 NULL이면, 새노드를 첫번째 노드로 만들거
		newNode->link = L->head;					// 새로운 노드의 링크 필드에 Head가 가리키는 첫번째 노드의 주소를 전달
		L->head = newNode;							// Head가 새로운 노드를 가리키게됨 [ Head -> 새로운 노드 -> (원래) 첫번째 노드 ]
	}
	else {											// pre가 가리키는 노드는 삽입할 부분의 앞에 있는 노드
		newNode->link = pre->link;					// 앞노드의 링크필드를 새로운노드의 링크필드로 전달 [ 새로운 노드 -> 뒷노드 ]
		pre->link = newNode;						// 앞노드의 링크필드에 새로운 노드의 주소를 저장 [ 앞 노드 -> 새로운 노드 ]
	}
}


// 새로운 노드를 연결리스트의 맨마지막에 삽입
void insertLastNode(linkedList_h* L, char* x) { 

	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));	// 새로운 노드 생성
	strcpy(newNode->data, x);						// 데이터 입력
	newNode->link = NULL;							// 새로운 노드가 맨마지막 노드가 되므로 링크필드는 NULL
	if (L->head == NULL) {							// 공백 연결리스트인 경우 --> 새로운 노드가 첫번째이자 마지막 노드
		L->head = newNode;							//						     Head에 새로운노드의 주소 저장 [ Head - 새로운 노드 ]
		return;
	}
													// 공백이 아닌 경우
	temp = L->head;									// 임시 포인터변수에 첫번째 노드의 주소를 저장
	while (temp->link != NULL) temp = temp->link;	// temp에 저장된 노드의 링크필드가 NULL이 아니면( 맨 마지막 노드가 아니면 ) temp에 순차적으로 노드의 링크필드를 저장
	temp->link = newNode;							// 맨 마지막 노드를 찾으면 그 노드의 링크필드에 새로운 노드의 주소를 입력 [ (원래)마지막 노드 -> 새로운 노드 ]
}