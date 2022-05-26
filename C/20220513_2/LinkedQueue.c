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

// 노드 삽입( rear )
void enLQueue(LQueueType* LQ, element item) {
	QNode* newNode = (QNode*)malloc(sizeof(QNode));	// 새노드 동적할당
	newNode->data = item;							// 데이터 삽입
	newNode->link = NULL;							// 삽입은 항상 rear에서 일어나므로 새노드가 가리킬 노드는 없음
	if (LQ->front == NULL) {						// front가 NULL --> 공백상태
		LQ->front = newNode;						
		LQ->rear = newNode;							// front와 rear가 모드 새노드를 가리킨다.
	}
	else {											// 공백상태가 아니면
		LQ->rear->link = newNode;					// rear가 가리키고 있던 데이터가 새노드를 가리키게 됨
		LQ->rear = newNode;							// rear도 새노드를 가리키게 됨
	}
}

// 노드 삭제( front )
element deLQueue(LQueueType* LQ) {
	QNode* old = LQ->front;							//삭제는 항상 frontd에서 일어남, front가 가리키고 있는 노드가 삭제할 노드
	element item;									// 반환할 데이터를 저장하기 위한 공간
	if (isLQEmpty(LQ)) return;						// 공백인지 확인( 삭제할 데이터가 있긴 한지 )
	else {
		item = old->data;							
		LQ->front = LQ->front->link;				// front는 삭제할 데이터의 다음 노드를 가리킴
		if (LQ->front == NULL)						// 만일 애초에 노드가 하나밖에 존재하지 않아서 front가 NULL을 갖게 되면, rear에도 똑같이 NULL을 넣어준다
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


