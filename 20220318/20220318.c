#include<stdio.h>
// << 4-2 : �� �� ������ ������ >>
// #2
int main(void)
{
	int a = 10;
	int b = 12;

	printf("a&b:%d\n", a & b);
	printf("a^b:%d\n", a ^ b);
	printf("a|b:%d\n", a | b);
	printf("~a:%d\n", ~a);
	printf("a<<1:%d\n", a<<1);
	printf("a>>2:%d\n", a>>2);

	return 0;
}
// #1
//int main(void)
//{
//	int a = 20, b = 3;
//	double res;
//
//	res = ((double)a) / ((double)b);
//	printf("a=%d,b=%d\n", a, b);
//	printf("a/b�� ��� : %.1lf\n", res);
//
//	a = (int)res;
//	printf("(int)%.1lf�� ���:%d\n", res, a);
//	
//	
//	return 0;
//}
// << 4-1 : ��� ������,���� ������, �� ������ >>
//#4
//int main(void)
//{
//	int a = 10, b = 20, c = 10;
//	int res;
//	
//	res = (a > b);
//	printf("a>b:%d\n", res);
//	
//	res = (a >= b);
//	printf("a>=b:%d\n", res);
//	
//	res = (a < b);
//	printf("a<b:%d\n", res);
//	
//	res = (a <= b);
//	printf("a<=b:%d\n", res);
//	
//	res = (a <= c);
//	printf("a<=c:%d\n", res);
//	
//	res = (a == b);
//	printf("a==b:%d\n", res);
//	
//	res = (a != c);
//	printf("a!=c:%d\n", res);
//
//	return 0;
//}
// #3
//int main(void)
//{
//	int a = 5, b = 5;
//	int pre, post;
//
//	pre = (++a) * 3;
//	post = (b++) * 3;
//
//	printf("�ʱ갪 a=%d, b=%d\n", a, b);
//	printf("������: (++a)*3=%d,  ������: (b++)*3=%d\n", pre, post);
//
//	return 0;
//}
//#2
//int main(void)
//{
//	double apple;
//	int banana;
//	int orange;
//
//	apple = 5.0 / 2.0;
//	banana = 5 / 2;
//	orange = 5 % 2;
//
//	printf("apple : %.1lf\n", apple);
//	printf("banana : %d\n", banana);
//	printf("orange : %d\n", orange);
//
//	return 0;
//}
// #1
//int main(void)
//{
//	int a,b;
//	int sum, sub, mul, inv;
//
//	a = 10;
//	b = 20;
//	sum = a + b;
//	sub = a - b;
//	mul = a * b;
//	inv = -a;
//
//	printf("a�� �� : %d, b�� �� :%d\n", a, b);
//	printf(" ���� : %d\n",sum);
//	printf(" ���� : %d\n",sub);
//	printf(" ���� : %d\n",mul);
//	printf(" a�� ���� ����: %d\n", inv);
//
//	return 0;
//}


// <<3-2 ������ �Է�>>
// #2
//int main(void)
//{
//	char data[20];
//	int grade;
//	char name[20];
//
//	printf("1�� �Է� : ");
//	scanf("%s", data);
//	printf("���� �Է� : ");
//	scanf("%d", &grade);
//	printf("�̸� �Է� : ");
//	scanf("%s", name);
//	printf( "%s���񿡼� %s�� ������ %c�Դϴ�.\n",data, name, grade);
//
//	return 0;
//  // ȭ��Ʈ �����̽� : 1���� �Է��ϱ� ���� ���͸� ������ �� ���Ͱ� 2���� �ԷµǸ鼭 ������ �� -> �ƽ�Ű�ڵ�� ���� ����, �齺���̽�,�� ���� ���ڷ� �ν��ϴ� Ư�������� p.299����
//  // scanf�Լ��� Ư¡���� ���� ���ڿ� �߰��� ����(�����̽�)�� ����� �Ǹ� �� ������  null�� �ν��ϱ� ������ �� ���� �ձ����� ����� ��. ���� ���� ���� �������� �Է��ؾ���. 
//}
// #1
//int main(void)
//{
//	int a;
//
//	scanf("%d", &a);
//	printf("�Էµ� ��: %c\n", a);
//
//
//	return 0;
//}


// <<const�� ����� ����>>
// #2
//int main(void)
//{
//	const int income = 0;
//	int* ptr = &income;
//	double tax;
//	const double tax_rate = 0.12;
//
//	*ptr = 100; // const�� ���ȭ�� ������, �ּҸ� ���ؼ� �� ������ �����ϴ�.
//
//	tax = income * tax_rate;
//	printf("������ : %.1lf�Դϴ�.\n", tax);
//
//	return 0;
//}
// #1
//int main(void)
//{
//	int income = 0;
//	double tax;
//	const double tax_rate = 0.12;
//
//	income = 456;
//	//tax_rate = 0.15; ��� ���� �߰��Ǹ� 'l-value(�������)�� const ��ü�� �����մϴ�'��� ������ ��
//	//�׷��� �ּҸ� ���� ���� ������ �� �ִ�.!?
//
//	tax = income * tax_rate;
//	printf("������ : %.1lf�Դϴ�.\n", tax);
//
//	return 0;
//}


// <<���ڿ� ����>>
// #2
//int main(void)
//{
//	char fruit[20] = "strawberry";
//
//	printf("%s\n", fruit);
//	strcpy(fruit, "banana"); // �� �Լ��� ���� ������ �ߴµ�, �����Ϸ��� ����(GCC, Visual Studio��)�� ���� �޶��� �� ����
//	printf("%s\n", fruit);
//
//	return 0;
//
//}
// #1
//int main(void)
//{
//	char fruit[20] = "strawberry";  //ũ�� 20, �ε����� �����ؼ� ������ �ϸ� ũ�⺯���� �Ұ����ϴ�.
//	char fruit0[] = "strawberry";   //ũ�� 11, �ε����� �������� �ʰ� �����ϸ� ũ��� ���ڼ���+1(null����) �̴�.
//	char* ptr = fruit; // �����ͺ��� ptr�� �����ϰ�  �迭fruit�� �ּҰ��� ����
//
//	// fruit ="banana"; �Ұ��� -  fruit�� �ּҰ��� ���� ���.
//
//	printf("����:%s\n", fruit);
//	printf("������ : %s %s\n",fruit,"jam");
//	printf("�����ϴ°��� : %s\n", ptr);
//
//	return 0;
//}