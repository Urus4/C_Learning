#include <stdio.h>
//16�� - 1 : 
int main(void) {

	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("#�޸𸮰� �����մϴ�. \n");
		exit(1);

	}

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;

}

//15�� - 4 : void ������

//int main(void) {
//	
//	int a = 10;
//	double b = 3.5;
//	void* vp;
//
//	vp = &a;
//	printf("a:%d\n", *(int *)vp);
//
//
//	vp = &b;
//	printf("b:%.1lf\n", *(double *)vp);
//
//	return 0;
//}


//15�� - 3 : �Լ�������

//int sum(int, int);
//
//int main(void) {
//
//	int (*fp)(int, int);
//	int res;
//
//	fp = sum;
//	res = fp(10, 20);
//	printf("result : %d\n", res);
//
//	return 0;
//}
//
//int sum(int a, int b) {
//	return (a + b);
//}


//15�� - 2 : ���������͸� ����� ������ ��ȯ

//void swap_ptr(char** ppa, char** ppb);
//
//int main(void) {
//
//
//	char* pa = "success";
//	char* pb = "failure";
//
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	swap_ptr(&pa, &pb);
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	return 0;
//
//}
//
//void swap_ptr(char** ppa, char** ppb)
//{
//	char* pt;
//
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}

//15�� - 1 : ����������

//int main(void) {
//
//	int a = 10;
//	int *pi; 
//	int **ppi;
//
//	pi = &a;
//	ppi = &a;
//
//
//	pi = &a;
//	ppi = &pi;
//	
//	printf("------------------------------------------------\n");
//	printf("����     ������     &����     *����     **����\n");
//	printf("------------------------------------------------\n");
//	printf(" a%10d%10u\n", a, &a);
//	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf("ppi%10u%10u%10u%10d\n", ppi, &ppi, *ppi, **ppi);
//	printf("------------------------------------------------\n");
//
//	return 0;
//}

// #14�� - 3

//int main(void) {
//
//	char* pary[5];
//	int i;
//
//	pary[0] = "dog";
//	pary[1] = "elephant";
//	pary[2] = "horse";
//	pary[3] = "tiger";
//	pary[4] = "lion";
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", pary[i]);
//	}
//
//	return 0;
//
//}


// #14�� - 2

//int main(void) {
//
//	char animal[5][20];
//	int i;
//	int count;
//	
//	count = sizeof(animal) / sizeof(animal[0]);
//	for (i = 0; i < count; i++) {
//		scanf("%s", animal[i]);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%s ", animal[i]);
//	}
//	return 0;
//}

// #14�� - 1

//int main(void) {
//
//	int score[3][4];
//	int total;
//	double avg;
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("4������ ���� �Է� : ");
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		total = 0;
//		for (j = 0; j < 4; j++)
//		{
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("���� : %d, ��� : %.2lf\n", total, avg);
//	}
//	return 0;
//}

// #13�� - 1

//int* sum(int i, int b);
//
//int main(void) {
//	int* resp;
//
//	resp = sum(10, 20);
//	printf("�� ������ �� : %d\n", *resp);
//
//	return 0;
//}
//
//
//int* sum(int a, int b) {
//
//	int res;
//
//	res = a + b;
//	return &res;
//}


//==========================================================================================================
// <C��� ����>
// #6

//int prime_check(int n);
//
//int main(void) {
//
//
//	int a;
//	int cnt = 0;
//	printf("����Է� : ");
//	scanf("%d", &a);
//
//	for (int i = 2; i <= a; i++)
//	{
//		if (prime_check(i) == 1) {
//			cnt++;
//			printf("%5d", i);
//			if (cnt % 5 == 0)
//				printf("\n");
//		}
//	}
//}
//
//int prime_check(int n)
//{
//
//	for (int j = 2; j <= n; j++)
//	{
//		if (n % j == 0 && n != j)
//		{
//			return 0;
//		}
//		else if (n == j)
//		{
//			return 1;
//		}
//	}
//
//}

// #5

//char* my_strcpy(char* pd, char* ps);
//
//int main(void) {
//
//	char str[20] = "strawberry";
//	char* ps = "apple";
//
//	my_strcpy(str, ps);
//
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps) {
//
//	char ch;
//
//	while ((ch=*ps) != '\0')
//	{
//		*pd = ch;
//		*ps++;
//		*pd++;
//	}
//
//	*pd = '\0';
//}


// #4

//void print_ary(int* pa, int size);
//
//int main(void) {
//
//	int ary1[] = { 10, 20, 30, 40, 50 };
//	int ary2[] = { 10, 20, 30, 40, 50, 60, 70 };
//
//	int size1 = sizeof(ary1) / sizeof(*ary1);
//	int size2 = sizeof(ary2) / sizeof(*ary2);
//
//	print_ary(ary1, size1);
//	printf("\n");
//	print_ary(ary2, size2);
//
//	return 0;
//	
//}
//
//void print_ary(int* pa, int size)
//{
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", pa[i]);
//	}
//
//}

// #3

//double find_max(double* pa, int size);
//
//int main(void) {
//
//	double ary[] = { 2.5, 3.1, 5.5, 7.1, 4.6, 9.9, 1.5 };
//	double max;
//	int size = sizeof(ary) / sizeof(*ary);
//
//
//	max = find_max(ary, size);
//	printf("�迭�� �ִ밪 :%.1lf", max);
//
//	return 0;
//
//}
//
//double find_max(double* pa, int size) {
//
//	double max;
//
//	max = *pa;
//
//	for (int i = 1; i < size; i++)
//	{
//		if (*(pa + i) > max) max = *(pa + i);
//	}
//
//	return max;
//}

// #2

//void swap(int* pa, int* pb);
//
//int main(void) {
//	int a = 20, b = 30;
//
//	swap(&a, &b);
//
//	printf("a:%d, b:%d\n", a, b);
//
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//}

// #1

//int main(void) {
//
//	for (int i = 1; i < 4; i++)
//	{
//
//		for (int k = 3; 2*k >2*i; k--)
//			printf("  ");
//		for (int j = 0; j < 2 * i - 1; j++)
//			printf("*");
//
//		printf("\n");
//	}
//
//}