#include <stdio.h>
#include<string.h>
// #10

//int main(void) {
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("������ ���߿� ������ ���� �̸� : ");
//
//	if (strcmp(str1, str2) > 0) //str1�� str2���� ũ��(������ ���߿� ������)
//		printf(" %s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	return 0;
//}


// #9

// 
//int main(void) {
//
//	char str1[80], str2[80];
//	char* resp;
//
//	printf("2���� ���� �̸� �Է� : ");
//	scanf("%s%s", str1, str2);
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//	printf("�̸��� �� ������ : %s\n", resp);
//
//	return 0;
//}


// #8

//char* my_strcpy(char* pd, char* ps);
//int main(void) {
//
//	char str[80] = "strawberry";
//
//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps) {
//
//	char* po = pd;  // pd++ �� �������� 1�� �����ϸ鼭 ���ڿ��� ù��°��Ҹ� ����Ű�� �����Ƿ�
//					// �迭�� �����ּҸ� �����ֱ� ���� ������ ��
//
//	while (*ps != '\0') {
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//	return po;
//}


// #7

//int main(void) {
//
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char* ps1 = "banana";
//	char* ps2 = str2; 
//
//	printf("���� ���ڿ� : %s\n", str1);
//	strcpy(str1, str2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("�ٲ� ���ڿ� : % s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	return 0;
//
//}


// #6
 
//void str_print(char* m_str, char* in_str);
////void my_gets(char* ps);
//
//int main() {
//
//	char *str ="test";
//	char s[5];
//
//	//my_gets(str,in_str);
//
//	str_print(str,s);
//
//	return 0;
//}
//
//void str_print(char *m_str, char *in_str)
//{
//	char *str=in_str;
//
//	while (*m_str != '\0')
//	{
//		*in_str = *m_str;
//		m_str++;
//		in_str++;
//	}
//
//	*in_str = '\0';
//
//	printf("�迭 ���ڿ� ��ȯ : %s\n", str);
//}
//
//void my_gets(char* ps) {
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		*ps = ch;
//		ps++;
//	}
//	*ps = '\0';
//}


// #5

//int main(void) {
//
//	char str[80];
//
//	printf("���ڿ� �Է� :");
//	scanf("%s", str);
//	printf("ù ��° �ܾ� : %s\n", str);
//	scanf("%s", str);
//	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);
//
//
//	//printf("������ ���Ե� ���ڿ� �Է� : ");
//	//gets(str);
//	//printf("�Է��� ���ڿ��� %s �Դϴ�", str);
//
//	return 0;
//
//}


//#4

//void input_ary(double* pa, int size);
//double find_max(double* pa, int size);
//
//int main(void) {
//
//	double ary[5];
//	double max;
//
//	int size = sizeof(ary) / sizeof(ary[0]);
//	input_ary(ary, size);
//	max = find_max(ary, size);
//	printf("�迭�� �ִ� : %.1lf\n", max);
//
//	return 0;
//}
//
//
//void input_ary(double* pa, int size) {
//
//	int i;
//
//	printf("%d���� �Ǽ��� �Է� : ", size);
//	for (i = 0; i < size; i++)
//	{
//		scanf("%lf", pa + i);
//	}
//}
//
//double find_max(double* pa, int size)
//{
//	double max;
//	int i;
//
//	max = pa[0];
//	for (i = 1; i < size; i++)
//	{
//		if (pa[i] > max) max = pa[i];
//	}
//
//	return max;
//
//}


//#3

//void print_ary(int* pa);
//
//int main(void) {
//	int ary1[] = { 10,20,30,40,50 };
//	int ary2[] = { 10,20,30,40,50,60,70 };
//
//	int a, b;
//
//	a = sizeof(ary1) / sizeof(*ary1);
//	b = sizeof(ary2) / sizeof(*ary2);
//
//	print_ary(ary1,a);
//	printf("\n");
//	print_ary(ary2,b);
//
//	return 0;
//}
//
//void print_ary(int* pa, int c){
//
//	for (int i = 0; i < c; i++) {
//
//		printf("%d ", pa[i]);
//	}
//
//}


//#2

//void print_ary(int* pa);
//int main(void) {
//	int ary[5] = { 10,20,30,40,50 };
//
//	print_ary(ary);
//
//	return 0;
//}
//void print_ary(int* pa){
//	int i;
//	for (i = 0; i < 5; i++) {
//
//		printf("%d ", pa[i]);
//	}
//
//}


//#1

//int main(void) {
//	int ary[5] = { 10,20,30,40,50 };
//	int a=10, b=20;
//	int* pa = ary;
//	int* pb = ary+3;
//
//	printf("pa : %x\n", pa);
//	printf("pb : %x\n", pb);
//	pa++;
//	printf("pb - pa : %x\n", pb-pa);
//
//	printf("�տ� �ִ� �迭 ����� �� ��� :");
//
//	if (pa < pb) printf("%d\n", *pa);
//	else printf("%d\n", *pb);
//
//	return 0;
//}