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

//1���� 10������ �� ���(���ȣ�� ���)
//1���� ���� ��(n)������ ���� ���ȣ���� ����ؼ� �ۼ��غ�����.
//1���� ���� ��(n)������ ���� ���ϴ� ���ȣ�� �Լ��� ����� ȣ���Ͽ� �����մϴ�.
//�Լ����� ������ ���� �ۼ��մϴ�.
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
//	printf("1���� %d������ �� : %d",n, sum);
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
//	printf("2�̻��� ������ �Է��ϼ��� : ");
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

// Ű����� ������ �Է��ϸ� ��� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
// ���� ��Ģ���길 �Է��մϴ�.
//
//int main(void) {
//
//
//	int a=0 ,b=0;
//	char c = '0';
//	int result;
//	
//	printf("��Ģ���� �Է�(����) : ");
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
//	else printf("�˸��� �����ȣ�� �����ϴ�.");
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
//		printf("�´� �����ȣ�� �����ϴ�.");
//	}
//
//
//	printf("%d%c%d=%d", a, c, b, result);
//	
//	return 0;
//
//}

// #7. 

// ü�߰� Ű�� �Է��Ͽ� BMI�� ���� �Ŀ� BMI�� ���� 20.0 �̻� 25.0�̸��̸� "ǥ���Դϴ�"�� ����ϰ� �׷��� ������ "ü�߰����� �ʿ��մϴ�"�� ����մϴ�.
// BMI�� ǥ��ü��, ��ü��, ��ü���� �Ǻ��ϴ� ��ġ�� �����Ը� Ű�� �������� ������ ����մϴ�.
// BMI�� ǥ��ü��, ��ü��, ��ü���� �Ǻ��ϴ� ��ġ�� �����Ը� Ű�� �������� ������ ���մϴ�.
// �̶� Ű�� ���� ������ ����մϴ�.
//double get_BMI(double a, double b);
//int main(void) {
//
//	double height, weight;
//	double BMI;
//	printf("����� Ű��?(cm) :");
//	scanf("%lf", &height);
//	printf("����� �����Դ�?(kg) : ");
//	scanf("%lf", &weight);
//
//	BMI = get_BMI(height, weight);
//
//	if (BMI >= 25.0 || BMI < 20.0)
//	{
//		printf("ü�߰����� �ʿ��մϴ�.\n");
//	}
//	else if (BMI < 25.0 && 20 <= BMI)
//	{
//		printf("ǥ��ü���Դϴ�.\n");
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
//	printf("�� �� ���ڿ��� : %s\n", temp);
//
//
//	if (strcmp(str1, str2) < 0)
//		printf("�� �տ� ���� ���ڿ��� : %s", str1);
//	else if (strcmp(str1, str2) > 0)
//		printf("�� �տ� ���� ���ڿ��� : %s", str2);
//	else printf("�� ������ �����մϴ�");
//
//}


// #5. �����͸� �̿��� ���ڿ� �Է�, ���

void my_gets(char* pa);
void print_char(char* pa,char* pb);

int main(void) {
	char ary[20];
	char s[20];

	my_gets(ary);

	print_char(ary,s);

	printf("����� ���ڿ� : %s",s);

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



// #4. ������ ���� �μ��� �ִ� ���

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




// #3. �迭�� ���� �Է��ϴ� �Լ�

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
//	printf("�迭�� �ִ� : %.1lf", max);
//
//	return 0;
//}
//
//void input_ary(double* pa, int size)
//{
//	printf("5���� �Ǽ��� �Է� : ");
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



// #2. �����͸� �̿��� �迭 ���

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


// #1. ����� - �Ƕ�̵�

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