#include <stdio.h>
#include "stackS.h"

int main(void) {
	//int top = -1;							// top�� �ʱ갪�� -1
	element item;							// �ڷ����� element(= int)�� ���� item ����

	printf("\n** ���� ���� ���� **\n");
	printStack();							
	push(1);								
	printStack();
	push(2);
	printStack();
	push(3);
	printStack();


	item = peek();							// peek() -> ���� ���� �����͸� ã�� �Լ�
	printStack();							
	printf("\tpeek => %d", item);			

	item = pop();							// ������ �����͸� ã�Ƽ� item�� �����ϰ�, top�� -1 ���� ����Ű�� ��ġ�� �ٲ���
	printStack();							// top�� ��ġ�� �ٲ�� ������ �迭�� ����� ���� ������� ���� �ƴ� -> ���� ���Ḯ��Ʈ�� �Ѱ�?
	printf("\tpop => %d", item);

	item = pop();
	printStack();							// ������ ���� ���¸� ��� ( ù��° ��Һ��� top�� ����Ű�� ��� ������ )
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d\n", item);

	//printf("%d %d %d", stack[0], stack[1], stack[2]);

	getchar();
	return 0;
}