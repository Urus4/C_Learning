#include <stdio.h>
#include "InsertLinkedList.h"

int main(void) {

	linkedList_h* L;
	L = createLinkedList_h();	// ���� ���Ḯ��Ʈ ����
	listNode* pre;

	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	printList(L);

	printf("\n(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L);

	printf("\n(3) ����Ʈ �������� [��] ��� �����ϱ�!\n");
	insertLastNode(L, "��");
	printList(L);

	printf("\n(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L);

	pre = L->head->link; // head�� ����Ű�� ���� ù��° ��� -> ù��° ��尡 ����Ű��(link) ��� -> �ι�° ���
						 // �ι�° ��尡 ���ԵǴ� ����� �� ��尡 �ȴ�. ���⼱ "��"�� �����ͷ� ���� ��带 ����
	printf("\n(5) ����Ʈ �� ��°�� [��] ��� �����ϱ�! \n");
	insertMiddleNode(L, pre, "��");
	printList(L);

	printf("\n(6) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����! \n");
	freeLinkedList_h(L);
	printList(L);

	getchar(); return 0;
}