#include <stdio.h>

//#�Լ�

void fruit(int count);

int main() {

	fruit(1);

	return 0;

}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	else fruit(count + 1); 
	printf("jam\n");

}


//#include "print_char.h"
//int main(void)
//{
//	print_char('@', 5);
//
//	return 0;
//
//}

//int add(int x, int y);
//
//
//int main() {
//
//	int a = 10, b = 20;
//	int res;
//
//	res = add(a, b);
//	printf("result : %d\n", res);
//	return 0;
//
//}
//
//int add(int x, int y)
//{
//	int temp;
//
//	temp = x + y;
//
//	return temp;
//}


//#�ݺ���

//int main() {
//
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//		if (sum > 30) break;
//	}
//
//	printf("������ �� : %d\n", sum);
//	printf("���������� ���� �� : %d\n", i);
//
//		return 0;
//}


//int main() {
//
//	int i, j, z;
//
//	for (i = 1; i < 6; i++) {
//
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//
//		printf("\n");
//
//	}
//
//	printf("\n");
//
//	for (i = 1; i < 6; i++) {
//		
//		for (j = 5; j > i; j--) {
//			printf(" ");
//		}
//
//		for (z = 0; z < i; z++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}  
//
//
//	printf("\n");
//
//}

//int main() {
//
//	int a;
//
//	do
//	{
//		a = a * 2;
//
//	} while (a < 10);
//	printf("a:%d\n", a);
//
//	return 0;
//
//}


//int add() {
//	static int sum = 0;
//	sum++;
//
//	return sum;
//}
//int main(void) {
//
//	static int sum = 0; ////////
//	add();
//	add();
//	add();
//
//	printf("%d\n",sum); // add�� sum�� main�Լ��� sum�� static���� ����Ǿ����� �ٸ� �����̴�
//}


//int main(void) {
//	
//	static int a = 1;
//	//int a = 1;
//	int i;
//
//	for (i = 0; i < 10; i++) {
//
//
//		a *= 2;
//		
//	}
//	printf("%d\n, %d\n",i, a);
//}



//#���ǹ�

//int main(void) {
//	
//	char rank = 66;
//	int m = 0;
//
//	switch (rank)
//	{
//	case 'A':
//		m = 300;
//		break;
//	case 'B':
//		m = 200;
//		break;
//	case 'C':
//		m = 100;
//		break;
//	default:
//		m = 10;
//		break; //�߰��� ������ �����ص� break�� ������  break�� ���ö� ���� ������ �����Ѵ�.
//				// break ���� �߿�!
//	}
//	printf("m�� ���� : %d\n", m);
//	return 0;
//
//}


//int main(void) {
//
//	int a = 10, b = 20;
//
//	if (a < 0)
//	{
//		if (b > 0)
//		{
//			printf("ok");
//		}
//	}
//	else
//	{
//		printf("ok");
//	}
//	return 0;
//}


//int main(void)
//{
//	int a = -10 , b = 0;
//
//	if (a > 10)
//		b = 10; 
//	else if ((a<10)&&(a>=0))
//		b = 0;
//	else
//		b = -10;
//	printf("b�� ���� : %d", b);
//}