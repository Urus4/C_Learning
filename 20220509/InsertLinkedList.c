#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "InsertLinkedList.h"

//���� ���� ����Ʈ�� �����ϴ� �Լ�
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;									// �����ͺ��� L ����
	L = (linkedList_h*)malloc(sizeof(linkedList_h));	// Head�� �����Ҵ����� ������� (?? �۾����� �ǵ��� �� �𸣰����� ���ʿ��� )
	L->head = NULL;										// ���� ���Ḯ��Ʈ �̹Ƿ� ����Ű�� ��� ����
	return L;											// �����Ҵ����� ������ ������ �ּҸ� ��ȯ
}


// ��� ��� ���� (�����Ҵ�� ������� ����)
void freeLinkedList_h(linkedList_h* L) {

	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}


// ��� ����� ���� ���������� ���
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


// ���ο� ��带 ù��° ���� ����(Head �ٷ� ����)
void insertFirstNode(linkedList_h* L, char* x) {

	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	 // ���ο� ��� ����
	strcpy(newNode->data, x);						 // ������ �Է�
	newNode->link = L->head;						 // Head�� ����Ű�� ���(���� ù��° ���)�� �ּҸ� ���ο� ����� ��ũ�ʵ忡 ����
	L->head = newNode;								 // ���ο� ����� �ּҸ� Head�� ����
}


// ���ο� ��带 ���Ḯ��Ʈ�� �߰��� ����
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {

	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	// ���ο� ��� ����
	strcpy(newNode->data, x);						// ������ �Է�
	if (L->head == NULL) {							// ���� ���Ḯ��Ʈ�̸� --> ���ο� ����� ��ũ�ʵ忡 NULL(ù��°���� ������ ����̹Ƿ�)
													//						  Head�� ���ο� ����� �ּ� ���� [ Head -> ���ο� ��� ]
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) {							// pre�� NULL�̸�, ����带 ù��° ���� �����
		newNode->link = L->head;					// ���ο� ����� ��ũ �ʵ忡 Head�� ����Ű�� ù��° ����� �ּҸ� ����
		L->head = newNode;							// Head�� ���ο� ��带 ����Ű�Ե� [ Head -> ���ο� ��� -> (����) ù��° ��� ]
	}
	else {											// pre�� ����Ű�� ���� ������ �κ��� �տ� �ִ� ���
		newNode->link = pre->link;					// �ճ���� ��ũ�ʵ带 ���ο����� ��ũ�ʵ�� ���� [ ���ο� ��� -> �޳�� ]
		pre->link = newNode;						// �ճ���� ��ũ�ʵ忡 ���ο� ����� �ּҸ� ���� [ �� ��� -> ���ο� ��� ]
	}
}


// ���ο� ��带 ���Ḯ��Ʈ�� �Ǹ������� ����
void insertLastNode(linkedList_h* L, char* x) { 

	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));	// ���ο� ��� ����
	strcpy(newNode->data, x);						// ������ �Է�
	newNode->link = NULL;							// ���ο� ��尡 �Ǹ����� ��尡 �ǹǷ� ��ũ�ʵ�� NULL
	if (L->head == NULL) {							// ���� ���Ḯ��Ʈ�� ��� --> ���ο� ��尡 ù��°���� ������ ���
		L->head = newNode;							//						     Head�� ���ο����� �ּ� ���� [ Head - ���ο� ��� ]
		return;
	}
													// ������ �ƴ� ���
	temp = L->head;									// �ӽ� �����ͺ����� ù��° ����� �ּҸ� ����
	while (temp->link != NULL) temp = temp->link;	// temp�� ����� ����� ��ũ�ʵ尡 NULL�� �ƴϸ�( �� ������ ��尡 �ƴϸ� ) temp�� ���������� ����� ��ũ�ʵ带 ����
	temp->link = newNode;							// �� ������ ��带 ã���� �� ����� ��ũ�ʵ忡 ���ο� ����� �ּҸ� �Է� [ (����)������ ��� -> ���ο� ��� ]
}