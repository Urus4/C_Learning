#include <stdio.h>
#include "stackS.h"

int top = -1;

int isStackEmpty(void) {

	if (top == -1) return 1;
	else return 0;
}

int isStackFull(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

void push(element item) {
	if (isStackFull()) {					// 삽입시에는 스택이 가득 찼는지 물어봄 ( 가득 차있으면 저장할 공간이 없으므로 )
		printf("\n\n Stack is FULL!!\n");
		return;
	}
	else stack[++top] = item;
}
	
element pop(void) {							// 삭제시에는  스택이 비어있는지 물어봄 ( 비어있으면 삭제할 원소가 없으므로 )
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}

	else return stack[top--];				// 스택의 데이터를 반환하고 다음 데이터를 가리킴
}											// 실제로 삭제한 것이 아니라, top의 위치가 바뀌면서 읽는 기준이 달라짐

element peek(void) {						// 스택의 top원소를 찾는 함수
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty !\n");
		return 0;
	}
	else return stack[top];
}

void printStack(void) {
	int i;
	printf("\n STACK[");
	for (i = 0; i <= top; i++)
		printf("%d", stack[i]);
	printf("]");
}