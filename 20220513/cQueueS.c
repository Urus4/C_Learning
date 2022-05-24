#include <stdio.h>
#include <stdlib.h>
#include "cQueueS.h"

QueueType* createCQueue(void) {					// front, rear 0으로 초기화 --> 공백과 포화의 구분을 위해
	QueueType* cQ;
	cQ = (QueueType*)malloc(sizeof(QueueType));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

int isCQueueEmpty(QueueType* cQ) {				// 공백상태 : front == rear
	if (cQ->front == cQ->rear) {
		printf(" Circular Queue is empty! ");
		return 1;
	}
	else return 0;
}

int isCQueueFull(QueueType* cQ) {					// 포화상태 : front == (rear+1) mod cQ_SIZE
	if (((cQ->rear + 1) % cQ_SIZE) == cQ->front) {
		printf("  Circular Queue is full! ");
		return 1;
	}
	else return 0;
}

void enCQueue(QueueType* cQ, element item) {		// 
	if (isCQueueFull(cQ)) return;
	else {
		cQ->rear = (cQ->rear + 1) % cQ_SIZE;
		cQ->queue[cQ->rear] = item;
	}
}

element deCQueue(QueueType* cQ) {
	if (isCQueueEmpty(cQ)) return;
	else {
		cQ->front = (cQ->front + 1) % cQ_SIZE;
		return cQ->queue[cQ->front];
	}
}


element peekCQ(QueueType* cQ) {
	if (isCQueueEmpty(cQ)) return;
	else return cQ->queue[(cQ->front + 1) % cQ_SIZE];
}


void printCQ(QueueType* cQ) {
	int i, first, last;
	first = (cQ->front + 1) % cQ_SIZE;
	last = (cQ->rear + 1) % cQ_SIZE;
	printf("Circular Queue : [");
	i = first;
	while (i != last) {
		printf("%3c", cQ->queue[i]);
		i = (i + 1) % cQ_SIZE;
	}
	printf("  ]");
}