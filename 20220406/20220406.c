#include <stdio.h>

//#8
int main(void) {

	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("�迭�� ��: ");
	for (i = 0; i < 3; i++) {
	
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}




//#7

//int main(void) {
//
//	int ary[3];
//	int i;
//
//	*(ary + 1) = 10;
//	*(ary + 2) = *(ary + 1) + 10;
//
//	printf("�� ��° �迭 ��ҿ� Ű���� �Է� :");
//	scanf("%d", &ary);
//	
//	for (i = 0; i < 3; i++) {
//		printf("%5d", *(ary + i));
//	}
//
//	return 0;
//}

//#6

//int main(void) {
//
//	int ary[] = { 10,20,30,40,50 };
//
//	printf("%d\n", *ary + 1);
//
//	printf("%d\n", *(ary + 1));
//
//
//}

//#5

//void swap(int x, int y)  ;
//
//int main(void) {
//
//	int a = 10, b = 20;
//
//	swap(a,b);
//	printf("a:%d, b:%d\n", a, b);
//
//	return 0;
//}
//
//void swap(int x, int y)
//{
//	int temp;
//
//	temp = x;
//
//	x = y;
//	y = temp;
//
//}



//#4

//int main(void) {
//
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double *pd = &db;
//
//	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));
//
//
//	printf("char�� �������� ũ�� : %d\n", sizeof(pc));
//	printf("int�� �������� ũ�� : %d\n", sizeof(pi));
//	printf("double�� �������� ũ�� : %d\n", sizeof(pd));
//
//	printf("char * ����Ʈ�� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
//	printf("int * ����Ʈ�� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi)); 
//	printf("double * ����Ʈ�� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
//
//
//}


//#3

//int main(void) {
//
//	int a = 10 , b = 20 ;
//	const int* pa = &a;
//
//	printf("���� a�� �� : %d\n", *pa);
//	pa = &b;
//	printf("���� b�� �� : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("���� a�� �� : %d\n", *pa);
//
//	return 0;
//
//}

//#2

//int main(void) {
//	int a = 10 ,b = 15, total;
//	double avg;
//	int* pa, * pb;
//	int* pt = &total;
//	double* pg = &avg;
//	
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//
//	printf("�� ������ �� : %d, %d\n", *pa, *pb);
//	printf("�� ������ �� : %d\n", *pt);
//	printf("�� ������ ��� : %.1lf\n", *pg);
//
//	return 0;
//}


//#1

//int main(void){
//
//	int a;
//	double b;
//	char c;
//
//	int* ptr = &b;
//
//	printf("int �� ������ �ּ� : %x\n", &a);
//	printf("int �� ������ �ּ� +1 : %x\n", &a+1);
//	printf("double �� ������ �ּ� : %x\n", &b);
//	printf("double �� ������ �ּ� +1 : %x\n", &b+1);
//	printf("char �� ������ �ּ� : %x\n", &c);
//	printf("char �� ������ �ּ� +1 : %x\n", &c+1);
//
//	return 0;
//}