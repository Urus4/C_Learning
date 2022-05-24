#include <stdio.h>

//#8
int main(void) {

	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값: ");
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
//	printf("세 번째 배열 요소에 키보드 입력 :");
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
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//
//	printf("char형 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int형 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double형 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char * 포인트가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int * 포인트가 가리키는 변수의 크기 : %d\n", sizeof(*pi)); 
//	printf("double * 포인트가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
//
//
//}


//#3

//int main(void) {
//
//	int a = 10 , b = 20 ;
//	const int* pa = &a;
//
//	printf("변수 a의 값 : %d\n", *pa);
//	pa = &b;
//	printf("변수 b의 값 : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a의 값 : %d\n", *pa);
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
//	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
//	printf("두 정수의 합 : %d\n", *pt);
//	printf("두 정수의 평균 : %.1lf\n", *pg);
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
//	printf("int 형 변수의 주소 : %x\n", &a);
//	printf("int 형 변수의 주소 +1 : %x\n", &a+1);
//	printf("double 형 변수의 주소 : %x\n", &b);
//	printf("double 형 변수의 주소 +1 : %x\n", &b+1);
//	printf("char 형 변수의 주소 : %x\n", &c);
//	printf("char 형 변수의 주소 +1 : %x\n", &c+1);
//
//	return 0;
//}