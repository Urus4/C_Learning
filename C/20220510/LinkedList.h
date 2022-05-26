#pragma once


typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;



void freeLinkedList_h(listNode** L);
void printList(listNode** L);
void insertFirstNode(listNode** L, char* x);
void insertMiddleNode(listNode** L, listNode* pre, char* x);
void insertLastNode(listNode** L, char* x);
void deleteNode(listNode** L, listNode* p);
listNode* searchNode(listNode** L, char* x);
void reverse(listNode** L);