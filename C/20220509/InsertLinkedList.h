#pragma once //��������� �ߺ����� �ʰ� �ѹ��� �ҷ��� �������ϴ� ��

typedef struct ListNode {	// ��������� ����ü
	char data[4];
	struct ListNode* link;
}listNode;

typedef struct {	// Head ,  ��������� ����ü listNode�� �ڷ������� �ϴ� �����ͺ����� ���´�.
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void insertFirstNode(linkedList_h* L, char* x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
void insertLastNode(linkedList_h* L, char* x);
