#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"


LQueueType* createLinkedQueue(void) {
	LQueueType* LQ;
	LQ = (LQueueType*)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}


int isLQEmpty(LQueueType* LQ) {
	if (LQ->front == NULL) {
		printf("Linked Queue is empty! ");
		return 1;
	}
	else return 0;
}

// ��� ����( rear )
void enLQueue(LQueueType* LQ, element item) {
	QNode* newNode = (QNode*)malloc(sizeof(QNode));	// ����� �����Ҵ�
	newNode->data = item;							// ������ ����
	newNode->link = NULL;							// ������ �׻� rear���� �Ͼ�Ƿ� ����尡 ����ų ���� ����
	if (LQ->front == NULL) {						// front�� NULL --> �������
		LQ->front = newNode;						
		LQ->rear = newNode;							// front�� rear�� ��� ����带 ����Ų��.
	}
	else {											// ������°� �ƴϸ�
		LQ->rear->link = newNode;					// rear�� ����Ű�� �ִ� �����Ͱ� ����带 ����Ű�� ��
		LQ->rear = newNode;							// rear�� ����带 ����Ű�� ��
	}
}

// ��� ����( front )
element deLQueue(LQueueType* LQ) {
	QNode* old = LQ->front;							//������ �׻� frontd���� �Ͼ, front�� ����Ű�� �ִ� ��尡 ������ ���
	element item;									// ��ȯ�� �����͸� �����ϱ� ���� ����
	if (isLQEmpty(LQ)) return;						// �������� Ȯ��( ������ �����Ͱ� �ֱ� ���� )
	else {
		item = old->data;							
		LQ->front = LQ->front->link;				// front�� ������ �������� ���� ��带 ����Ŵ
		if (LQ->front == NULL)						// ���� ���ʿ� ��尡 �ϳ��ۿ� �������� �ʾƼ� front�� NULL�� ���� �Ǹ�, rear���� �Ȱ��� NULL�� �־��ش�
			LQ->rear = NULL;						
		free(old);
		return item;
	}
}


element peekLQ(LQueueType* LQ) {
	element item;
	if (isLQEmpty(LQ)) return;
	else {
		item = LQ->front->data;
		return item;
	}
}

void printLQ(LQueueType* LQ) {
	QNode* temp = LQ->front;
	printf(" Linked Queue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->link;
	}
	printf(" ] ");
}


