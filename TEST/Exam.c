#include <stdio.h>
//#CH9

// <�̴� ���� ���α׷�>
//Ű����� �Ǽ�3���� �Է��� ���� ū ���ں��� ���� ���ڷ� ������ �� ����ϴ� ���α׷��� �ۼ��մϴ�.
//���� �ڵ�� ��� ����� �����Ͽ� line_up �Լ��� �ۼ��ϼ���.
//line_up �Լ����� �̹� ���ǵ��� swap �Լ��� ȣ���Ͽ� �����ϼ���.
#include <stdio.h>

void swqp(double* pa, double* pb);
void line_up(double* mxap, double* midp, double* minp);

int main(void) {

	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) {

	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp) {

	if (*maxp > *midp) {

		if (*maxp > *minp)
		{
			if (*midp > *minp)
			{
			}
			else swap(midp, minp);
		}
		else swap(maxp, minp);

	}
	else if (*midp > *minp)
	{
		if (*maxp > *minp) //
		{
			swap(maxp, midp);
		}
		else
		{
			swap(maxp, midp);
			swap(midp, minp);
		}
	}
	else
	{
		swap(maxp, minp);
	}
}




// #CH7

// 1���� ���� ��(n)������ ���� ���ȣ���� ����ؼ� �ۼ��غ�����. 1���� ���� ��(n)������ ���� ���ϴ� ���ȣ�� �Լ��� ����� ȣ���Ͽ� �����մϴ�.
// �Լ����� ������ ���� �ۼ��մϴ�.
//int rec_func(int n);
//
//int main(void) {
//
//
//}

//#CH6
 
//2�̻��� ������ �Է��Ͽ� 2���� �Է��� �������� ��� �Ҽ��� ����մϴ�.
//��, �� �ٿ� 5�� �� 5ĭ �������� ����մϴ�. �ϳ��� ������ �Ҽ������� �Ǵ��ؼ� ����ϴ� ������ ������ �����ϴ�.
// 1) �ϴ� �Ҽ���� �����Ѵ�.
// 2) 2���� �� �������� �ϳ� ���� ������ �ϳ��� ������ �������� ������ ����Ѵ�.
// 3) 1�� ������ 2���� �ٲ��� �ʾ����� �� ������ ����Ѵ�.
// ���� 1~3������ ������ �ϳ��� ������ ���ؼ� �Ҽ��� �Ǻ��ϴ� �����̰� � �������� ��� ���� �Ǻ��ϱ� ���ؼ��� 1~3������ ������ �ٽ� �ݺ��մϴ�.
//int main(void) {
//
//	int a,b;
//
//	int count = 0;
//	printf("2 �̻��� ������ �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//
//
//	for (int i = 2; i <= a; i++) {
//
//		for (int j = 2; j <= i; j++) {
//
//			if (i % j == 0 && i != 2) {
//				break;
//			}else if (i == 2) {
//				printf("%5d", i);
//				count++;
//				if (count % 5 == 0)
//					printf("\n");
//			}
//			else if (j == i - 1) {
//				printf("%5d", i);
//				count++;
//				if (count % 5 == 0)
//					printf("\n");
//			}
//		}
//
//	}	
//}


//#CH5.2

// Ű����� ������ �Է��ϸ� ��� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
// ���� ��Ģ���길 �Է��մϴ�.
// ������1 ---> ��Ģ���� �Է�(����) : 11/3 (����) ---> 11/3=3
// ������2 ---> ��Ģ���� �Է�(����) : 10-6 (����) ---> 10-6=4
//int main(void) {
//
//	int x=0, y=0;
//	int result = 0;
//	char cal;
//
//	printf("��Ģ���� �Է�(����) : ");
//	scanf_s("%d%c%d", &x, &cal, &y);
//
//	switch(cal)
//	{
//		case '+':
//			result = x + y;
//			break;
//		case '-':
//			result = x - y;
//			break;
//		case '*':
//			result = x * y;
//			break;
//		case '/':
//			result = x / y;
//			break;
//		default:
//			printf("�ٸ� �����ڸ� �־��ֽʽÿ�.");
//			return 0;
//	}
//
//	printf("%d%c%d=%d", x, cal, y, result);
//
//	return 0;
//}


//#CH5.1

//int main(void) {
//
//	int age = 25, chest = 95;
//
//	char size;
//
//	if (age < 20)
//	{
//		if (chest < 85) {
//			size = 'S';
//		}
//		else if (85 <= chest < 95) {
//			size = 'M';
//		}
//		else
//			size = 'L';
//
//	}
//	else
//	{
//		if (chest < 90) {
//			size = 'S';
//		}
//		else if (90 <= chest < 100) {
//			size = 'M';
//		}
//		else
//			size = 'L';
//
//
//	}
//
//	printf("������� %c�Դϴ�. \n", size);
//
//}