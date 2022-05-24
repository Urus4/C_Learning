#include <stdio.h>
#include "stackS.h"

int main(void) {
	//int top = -1;							// top의 초깃값은 -1
	element item;							// 자료형이 element(= int)인 변수 item 생성

	printf("\n** 순차 스택 연산 **\n");
	printStack();							
	push(1);								
	printStack();
	push(2);
	printStack();
	push(3);
	printStack();


	item = peek();							// peek() -> 가장 위의 데이터를 찾는 함수
	printStack();							
	printf("\tpeek => %d", item);			

	item = pop();							// 삭제할 데이터를 찾아서 item에 저장하고, top을 -1 시켜 가리키는 위치를 바꿔줌
	printStack();							// top의 위치만 바뀔뿐 실제로 배열에 저장된 값이 사라지는 것은 아님 -> 순차 연결리스트의 한계?
	printf("\tpop => %d", item);

	item = pop();
	printStack();							// 스택의 저장 상태를 출력 ( 첫번째 요소부터 top이 가리키는 요소 까지만 )
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d\n", item);

	//printf("%d %d %d", stack[0], stack[1], stack[2]);

	getchar();
	return 0;
}