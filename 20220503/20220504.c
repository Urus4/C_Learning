#include <stdio.h>
#include <stdlib.h>

// 17�� : ����� ���� �ڷ���
// 17- 2 : ����ü Ȱ��, ����ü, ������

// #4. typedef

//struct student
//{
//	int num;
//	double grade;
//};
//
//
//typedef struct student Student;
//
//void print_data(Student* ps);
//
//int main(void) {
//
//	Student s1 = { 315, 4.2 };
//	print_data(&s1);
//	return 0;
//}
//
//void print_data(Student* ps)
//{
//
//	printf("�й� : %d\n", ps->num);
//	printf("���� : %.1lf\n", ps->grade);
//
//}


// #3. �ڱ� ���� ����ü (�߿�)

//struct list
//{
//	int num;
//	struct list* next;
//};
//
//int main(void)
//{
//	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
//	struct list* head = &a, * current;
//
//	a.next = &b;
//	b.next = &c;
//
//	printf("head->num : %d\n", head->num);
//	printf("head->next->num : %d\n", head->next->num);
//
//	printf("list all : ");
//	current = head;
//	while (current != NULL) {
//
//		printf("%d  ", current->num);
//		current = current->next;
//	}
//
//	printf("\n");
//
//	return 0;
//}


// #2. ����ü �迭

//struct address
//{
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//void print_list(struct address* lp);
//
//int main(void) {
//
//	struct address list[5] = {
//		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
//		{"�̼���", 35, "222-2222", "���� ��õ��"},
//		{"�庸��", 19, "333-3333", "�ϵ� ó����"},
//		{"������", 15, "444-4444", "�泲 õ��"},
//		{"���߱�", 45, "555-5555", "Ȳ�ص� ����"}
//	};
//
//	print_list(list);
//
//	return 0;
//
//}
//
//void print_list(struct address* lp)
//{
//	
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%10s%5d%15s%20s\n",
//			(lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
//	}
//
//	return 0;
//}



// #1.����ü �������� ���

//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//int main(void)
//{
//	struct score yuni = { 90,80,70 };
//	struct score* ps = &yuni;
//
//	printf("���� : %d\n", (*ps).kor);
//	printf("���� : %d\n", ps->kor);
//	printf("���� : %d\n", ps->kor);
//
//	return 0;
//}




// 17 -1 : ����ü

// #4. ����ü ����� ���ÿ� �ʱ�ȭ�ϱ� / ����ü ������ �Լ� �Ű������� ����ϱ�

//struct vision
//{
//	double left;
//	double right;
//}robot = { 1.0 , 2.0 };
//
//struct vision exchange(struct vision robot);
//
//int main(void)
//{
//	printf("�÷� �Է� : %.1lf  %.1lf\n", robot.left, robot.right);
//	//scanf("%lf%lf", &(robot.left), &(robot.right));
//	robot = exchange(robot);
//	printf("�ٲ� �÷� :%.1lf  %.1lf\n", robot.left, robot.right);
//
//	return 0;
//}
//
//struct vision exchange(struct vision robot) {
//
//	double temp;
//
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//	return robot;
//}

// #3. ����ü�� ����� �ٸ� ����ü ����ϱ�

//struct profile
//{
//	int age;
//	double height;
//};
//
//struct student
//{
//	struct profile pf;
//	int id;
//	double grade;
//};
//
//int main(void)
//{
//	struct student yuni;
//
//	yuni.pf.age = 27;
//	yuni.pf.height = 172.5;
//	yuni.id = 1911850;
//	yuni.grade = 4.1;
//
//	printf("���� : %d\n", yuni.pf.age);
//	printf("Ű : %.1lf\n", yuni.pf.height);
//	printf("�й� : %d\n", yuni.id);
//	printf("���� : %.1lf\n", yuni.grade);
//
//	return 0;
//
//}

// #2. �پ��� ����ü ���

//struct profile
//{
//	char name[20];
//	int age;
//	double height;
//	char* intro;
//};
//
//int main(void) {
//	struct profile yuni;
//
//	strcpy(yuni.name, "������");
//	yuni.age = 27;
//	yuni.height = 172.5;
//
//	yuni.intro = (char*)malloc(80);
//	printf("�ڱ�Ұ� : ");
//	gets(yuni.intro);
//
//	printf("�̸� : %s\n", yuni.name);
//	printf("���� : %d\n", yuni.age);
//	printf("Ű : %.1lf\n", yuni.height);
//	printf("�ڱ�Ұ� : %s\n", yuni.intro);
//
//	free(yuni.intro);
//
//	return 0;
//}

// #1. 

//struct student
//{
//	int num;
//	double grade;
//
//};
//
//int main(void) {
//	
//	struct student s1;
//
//	s1.num = 2;
//	s1.grade = 2.7;
//	printf("�й� :%d\n", s1.num);
//
//	printf("���� :%.1lf\n", s1.grade);
//
//	return 0;
//
//}




// 16�� - �޸� ���� �Ҵ�
//16�� - 2 : ���� �Ҵ� ���� ������ Ȱ��


//16�� - 1 : ���� �Ҵ� �Լ�
//  #2. ��Ÿ ���� �Ҵ� �Լ� < realloc >

//int main(void) {
//
//	int* pi;
//	int size = 5;
//	int count = 0;
//
//	int num;
//	int i;
//
//
//	pi = (int*)malloc(size, sizeof(int));
//	while (1)
//	{
//		printf("����� �Է��ϼ��� => ");
//		scanf("%d", &num);
//
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//	}
//	free(pi);
//	return 0;
//}


//  #1. ���� �Ҵ� ������ �迭ó�� ���
 
//int main(void)
//{
//	int *pi;
//	int i, sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int)); // 4����Ʈ * 5 = 20����Ʈ
//	if (pi == NULL)
//	{
//		printf("�޸𸮰� �����մϴ�!\n");
//		exit(1);
//	}
//
//	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]); // pi�� ���������� ����Ǿ���, �����Ҵ������ int�� ������ 5��(20����Ʈ)�� ������ �� �����Ƿ�
//		sum += pi[i];		 // �迭ó�� ���� 5�� �޾Ƽ� ����
//	}
//
//	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
//	free(pi);
//
//	return 0;
//}