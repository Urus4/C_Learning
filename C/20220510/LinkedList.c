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

void insertMiddleNode(listNode** L, listNode* pre, char* x) {	// '��� ����' �Լ��ʹ� �ٸ��� Ž������ ã�Ƴ� ��带 ������� �ճ��� Ȱ��
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


// ��� �����ϱ�
void deleteNode(listNode** L, listNode* p) {		// p�� '��� Ž��'�� ���� ã�� ������ ���ϴ� ��� ,  ���Ž���� ������ ��带 ã�� ���� �����

	listNode* pre;
	if ((*L) == NULL) return;					// (1) �����϶�
	if ((*L)->link == NULL) {					// (2) ��尡 �Ѱ��� �����Ҷ�(�����Ұ� �ϳ��ۿ� ������)
		free((*L));								//     ù��° ���, �����Ҵ� ����
		(*L) = NULL;								//     ����Ű�� ��尡 ��������Ƿ� Head�� NULL
		return;
	}
	else if (p == NULL) return;						// (3) ã�� ��尡 NULL, ���ϴ� ��带 ��ã������
	else {											// (4) �� �� ��尡 �������� �����ϰ� ������ ��� Ž���� ����� ������
		pre = (*L);								//	   ù��° ������ Ž�� ����
		while (pre->link != p) {					//     ����  pre ����� ��ũ�ʵ尡 ������ ���� ���� ������ �ݺ�
			pre = pre->link;						//     pre�� ����Ű�� ����� ��ũ�ʵ尡 ������ ��带 ����Ű�� �Ǹ� �ݺ������� 
		}											//     
		pre->link = p->link;						//	   pre�� ������ ����� ���� ��带 ����Ű���� ��
		free(p);									//     ������ ��� �����Ҵ� ����
	}
}


// ���ϴ� ��� Ž���ϱ�
listNode* searchNode(listNode** L, char* x) {
	listNode* temp;
	temp = (*L);
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;	// strcmp ��ȯ�� ����(str1<str2), ���(str1>str2), 0(str1==str2) 3����
		else temp = temp->link;							// ã�� �������ϰ� ������ temp�� �״�� ��ȯ, �ƴϸ� ���� ���� �Ѿ
	}
	return temp;										// ������ ������ Ȯ���ϴٰ� ������ �׳� temp(==NULL) ��ȯ
}


// ��� ���� ���ݴ�� �ٲٱ�
void reverse(listNode** L) {

	listNode* p;
	listNode* q;
	listNode* r;			// (���� ���� ���)r -> q(�߰� ���) -> p(���� ���� ���) ������ ���� ��带 ����Ŵ 

	p = (*L);			// �� ó���� p�� ù��° ��带 ����Ŵ
	q = NULL;				
	r = NULL;

	while (p != NULL) {		// p�� ������ ��忡 ������ ������
		r = q;				// 
		q = p;				// r, q, p �� �� ��徿 ������(����)���� �Űܰ�
		p = p->link;		//
		q->link = r;		// �ٽ�, r�� q�� ����Ű�� ��(�ٲٱ� ���� r�� �� ���ʿ� �����Ƿ� q�� ����Ŵ)�� q�� r�� ����Ű���� ������ִ� ��
	}
	(*L) = q;			// ���������� ���� �����ʿ� �ִ� ���(������ ���)�� ��尡 ����Ű�� �ϸ鼭 ������ ���ݴ�� �ٲ�� ��
}