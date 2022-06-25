#include <stdio.h>
#include <string.h>

//int main(void) {
//	
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 1; j < i; j++)
//			printf(" ");
//
//		for (int k = 6; i < k; k--)
//			printf("*");
//
//		printf("\n");
//	}
//}


// #10.

//1부터 10까지의 합 계산(재귀호출 사용)
//1부터 일정 수(n)까지의 합을 재귀호출을 사용해서 작성해보세요.
//1부터 일정 수(n)까지의 합을 구하는 재귀호출 함수를 만들고 호출하여 구현합니다.
//함수명은 다음과 같이 작성합니다.
//int rec_func(int n);
//
//int main(void) {
//
//	int n;
//	int sum;
//
//	scanf("%d", &n);
//
//	sum = rec_func(n);
//
//	printf("1부터 %d까지의 합 : %d",n, sum);
//
//	return 0;
//
//}
//
//int rec_func(int n)
//{
//
//	if (n != 0)
//		n += rec_func(n - 1);
//	else return n;
//}


// #9. 

//int main(void) {
//
//	int a;
//	int cnt=0;
//	printf("2이상의 정수를 입력하세요 : ");
//	scanf("%d", &a);
//
//
//	for (int i = 2; i <= a; i++)
//	{
//		for (int j = 2; j <= i; j++)
//		{
//			if (i % j == 0 && i != j)
//			{
//				break;
//			}
//			else if (i == j)
//			{
//				cnt++;
//				printf("%5d", i);
//				if (cnt%5 == 0)
//					printf("\n");
//			}
//		}
//	}
//}


// #8.

// 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요.
// 정수 사칙연산만 입력합니다.
//
//int main(void) {
//
//
//	int a=0 ,b=0;
//	char c = '0';
//	int result;
//	
//	printf("사칙연산 입력(정수) : ");
//	scanf("%d%c%d", &a, &c, &b);
//
//
//	if (c == '+')
//		result = a + b;
//	else if (c == '-')
//		result = a - b;
//	else if (c == '*')
//		result = a - b;
//	else if (c == '/')
//		result = a / b;
//	else printf("알맞은 연산기호가 없습니다.");
//
//	switch (c)
//	{
//	case '+':
//		result = a + b;
//		break;
//	case '-':
//		result = a - b;
//		break;
//	case '*':
//		result = a * b;
//		break;
//	case '/':
//		result = a / b;
//		break;
//	default:
//		printf("맞는 연산기호가 없습니다.");
//	}
//
//
//	printf("%d%c%d=%d", a, c, b, result);
//	
//	return 0;
//
//}

// #7. 

// 체중과 키를 입력하여 BMI를 구한 후에 BMI의 값이 20.0 이상 25.0미만이면 "표준입니다"를 출력하고 그렇지 않으면 "체중관리가 필요합니다"를 출력합니다.
// BMI는 표준체중, 저체중, 과체중을 판변하는 수치로 몸무게를 키의 제곱으로 나누어 출력합니다.
// BMI는 표준체중, 저체중, 과체중을 판별하는 수치로 몸무게를 키의 제곱으로 나누어 구합니다.
// 이때 키는 미터 단위로 계산합니다.
//double get_BMI(double a, double b);
//int main(void) {
//
//	double height, weight;
//	double BMI;
//	printf("당신의 키는?(cm) :");
//	scanf("%lf", &height);
//	printf("당신의 몸무게는?(kg) : ");
//	scanf("%lf", &weight);
//
//	BMI = get_BMI(height, weight);
//
//	if (BMI >= 25.0 || BMI < 20.0)
//	{
//		printf("체중관리가 필요합니다.\n");
//	}
//	else if (BMI < 25.0 && 20 <= BMI)
//	{
//		printf("표준체중입니다.\n");
//	}
//
//	return 0;
//}
//
//double get_BMI(double a, double b) {
//
//	double BMI;
//	double conversion;
//
//	conversion = a * 0.01;
//
//	BMI = b/(conversion*conversion);
//
//	return BMI;
//}

// #6.str(n)cpy, str(n)cat , strlen , strcmp 

//int main(void) {
//
//	char str1[] = "starfish";
//	char str2[] = "starfish";
//	char* pa = "panda";
//	char* pb = "rabbit";
//	char str3[20];
//
//	char* temp;
//
//	strcpy(str3, str1);	
//	strcpy(str1, pa);
//	strcpy(str1, str3);
//	printf("%s ", str1);
//	printf("%s", pa);
//	printf("\n");
//
//	if (strlen(pa) < strlen(pb))
//		temp = pb;
//	else temp = pa;
//	printf("더 긴 문자열은 : %s\n", temp);
//
//
//	if (strcmp(str1, str2) < 0)
//		printf("더 앞에 오는 문자열은 : %s", str1);
//	else if (strcmp(str1, str2) > 0)
//		printf("더 앞에 오는 문자열은 : %s", str2);
//	else printf("두 문장은 동일합니다");
//
//}


// #5. 포인터를 이용한 문자열 입력, 출력

void my_gets(char* pa);
void print_char(char* pa,char* pb);

int main(void) {
	char ary[20];
	char s[20];

	my_gets(ary);

	print_char(ary,s);

	printf("출력할 문자열 : %s",s);

	return 0;
}
void my_gets(char* pa) {

	char ch;

	while ( (ch = getchar()) != '\n')
	{
		*pa = ch;
		pa++;
	}
	*pa = '\0';
}

void print_char(char* pa, char *pb) {

	int cnt = 0;

	while (*pa != '\0')
	{
		*(pb+cnt) = *pa;
		cnt++;
		pa++;
	}

	*(pb + cnt) = '\0';

}



// #4. 변수의 값을 인수로 주는 경우

//void swap(int *pa, int *pb);
//
//int main(void) {
//	int a = 10, b = 20;
//
//	swap(&a, &b);
//
//	printf(" a : %d, b : %d", a, b);
//	return 0;
//}
//
//void swap(int *pa, int *pb) {
//
//	int temp;
//
//	temp = *pa;
//
//	*pa = *pb; 
//	*pb = temp;
//}




// #3. 배열에 값을 입력하는 함수

//void input_ary(double* pa, int size);
//double find_max(double* pa, int size);
//
//
//int main(void) {
//
//	double ary[5];
//	double max;
//	int size = sizeof(ary) / sizeof(*ary);
//
//	input_ary(ary, size);
//	max = find_max(ary, size);
//	printf("배열의 최댓값 : %.1lf", max);
//
//	return 0;
//}
//
//void input_ary(double* pa, int size)
//{
//	printf("5개의 실수값 입력 : ");
//	for (int i = 0; i < size; i++) {
//		scanf("%lf", pa + i);
//	}
//}
//
//double find_max(double* pa, int size)
//{
//	double max;
//
//	max = *pa;
//	for (int i = 1; i < size; i++)
//	{
//		if (*(pa+i) > max)
//			max = *(pa + i);
//	}
//	return max;
//}



// #2. 포인터를 이용한 배열 출력

// #2-1
//int main(void) {
//
//	int str[] = { 10, 20, 30, 40, 50 ,60};
//	int* pa = str;
//	int size; 
//
//	size = sizeof(str) / sizeof(*str);
//
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	
//	return 0;
//}
// #2-2
//void print_ary(int* ptr);
//
//int main(void) {
//
//	int str[] = { 10, 20, 30, 40, 50, 60 };
//	int size = sizeof(str) / sizeof(*str);
//
//	print_ary(str, size);
//
//	return 0;
//}
//
//void print_ary(int* ptr, int size) {
//
//	for (int i = 0; i < size; i++)
//		printf("%d ", *(ptr + i));
//
//}


// #1. 별찍기 - 피라미드

//int main(void) {
//
//
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 5; j > i; j--)
//		{
//			printf(" ");
//		}
//
//		for (int k = 0; k < 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}