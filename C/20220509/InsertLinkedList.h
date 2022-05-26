#pragma once //헤더파일이 중복되지 않고 한번만 불러와 지도록하는 것

typedef struct ListNode {	// 노드형태의 구조체
	char data[4];
	struct ListNode* link;
}listNode;

typedef struct {	// Head ,  노드형태의 구조체 listNode를 자료형으로 하는 포인터변수를 갖는다.
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void insertFirstNode(linkedList_h* L, char* x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
void insertLastNode(linkedList_h* L, char* x);
