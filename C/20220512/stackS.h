#pragma once
#define STACK_SIZE 100

typedef int element;			// typedef 는 '자료형'의 별칭을 만드는 기능 ( int == element )
element stack[STACK_SIZE];		// 구조체뿐만 아니라 모든 자료형의 별칭을 만들 수 있음
								// 자료형 int를 element로 정의한 것
								// typedef로 정의한 별칭을 사용자 정의 자료형, 사용자 정의 타입이라고 함

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);