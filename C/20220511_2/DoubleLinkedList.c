#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "DoubleLinkedList.h"

linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}

void printList(linkedList_h* DL) {

	listNode* p;
	printf("DL=(");

	p = DL->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) printf(",");
	}
	printf(") \n");
}


void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL)
			newNode->rlink->llink = newNode;
	}
}

//void deleteNode(linkedList_h* DL, listNode* old) {
//	if (DL->head == NULL) return;
//	else if (old == NULL) return;
//	else if (old->llink == NULL)		//첫번째 노드 지울때
//	{
//		DL->head = old->rlink;
//		old->rlink->llink = NULL;
//		free(old);
//	}
//	else if (old->rlink == NULL)		//마지막 노드 지울때
//	{
//		old->llink->rlink = NULL;
//		free(old);
//	}
//	else {
//		old->llink->rlink = old->rlink;
//		old->rlink->llink = old->llink;
//		free(old);
//	}
//}


void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL || old == NULL) return;		// 공백리스트, 찾은 노드가 없을때
	else if (old->llink == NULL && old->rlink == NULL)	// 노드가 하나일때
	{
		DL->head = NULL;
	}
	else if (old->rlink == NULL)		//마지막 노드 지울때
	{
		old->llink->rlink = NULL;
	}
	else if (old->llink == NULL )		//첫번째 노드 지울때
	{
		DL->head = old->rlink;
		old->rlink->llink = NULL;
	}
	else
	{								//중간에 있는 노드 지울때
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
	}
	free(old);
}




listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0)return temp;
		else temp = temp->rlink;
	}
	return temp;
}