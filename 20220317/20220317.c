#include <stdio.h>
void add(int a, int b, int sum)
{
	sum = a + b;
}
int main()
{
	int a = 3, b = 4;
	int sum = 0;
	add(a, b, sum);
	printf("%d",sum); // �̶� main �Լ���  sum�� add�Լ��� sum�� ���� �ٸ� �����̹Ƿ� printf�� ������� 0�� ���´�
	
	return 0; 
}


//int main(void)
//{
//	char fruit[10]="apel";
//
//	printf("%s\n", fruit);
//	/*a = 4294967296;
//	printf("%u\n", a);
//	a = -1;
//	printf("%u\n", a);*/
//
//	return 0;
//
//}


//int main(void)
//{
//	int a;
//	int b = 20;
//	int c;
//
//	a = 10;
//	printf("a:%d\n", a);
//	printf("b:%d\n", b);
//	// printf("c:%d\n", c); ����c�� �ʱ�ȭ�� ���� �ʾƼ� ������ ������ ��,
//	// F10(���ν��� ���� ����)�� ���� ��������� �Ѵ��Ѵ� ���� ��ȭ�� Ȯ���ϱ�
//
//	return 0;
//}



//int main(void)
//{
//	//int ptr[] = "first"; // ptr = &ptr[0], �迭�̸� ptr�� ���ڿ��� �ּҸ� ��Ÿ��
//	//int* ptr0 = "two"; //
//	int data = 20;
//
//
//	printf("%d\n", 'A');  //%c�� ���� �ϳ��� ��� (������ �ּҷ� �����Ѵ�.
//	printf("%s\n", "A");  //%s�� ���ڿ� ���
//	printf("%c�� %s�Դϴ�.\n", '1',"first");  // "
//
//	return 0;
//}


//int main(void)
//{
//	printf("Be happy\n");
//	printf("1234567890124567890\n");
//	printf("My\tfriend\n");
//	printf("Goot\bd\tchance\n");
//	printf("Cow\rw\a\n");
//
//	return 0;
//}
//  ������ �� ������ ���� �Ʒ� ���� ��Ͽ� �ڵ带 Ȯ���� �� �ִµ� 
//  �ڵ��� C�� ������ ����, LNK�� ��ũ ������ ����
//  �������� - '�߰�ȣ' �� ����'��' ��밡��, �� �ۿ��� ���x