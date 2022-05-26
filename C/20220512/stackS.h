#pragma once
#define STACK_SIZE 100

typedef int element;			// typedef �� '�ڷ���'�� ��Ī�� ����� ��� ( int == element )
element stack[STACK_SIZE];		// ����ü�Ӹ� �ƴ϶� ��� �ڷ����� ��Ī�� ���� �� ����
								// �ڷ��� int�� element�� ������ ��
								// typedef�� ������ ��Ī�� ����� ���� �ڷ���, ����� ���� Ÿ���̶�� ��

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);