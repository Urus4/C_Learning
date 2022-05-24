#include <stdio.h>
#include <stdlib.h>

// 17장 : 사용자 정의 자료형
// 17- 2 : 구조체 활용, 공용체, 열거형

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
//	printf("학번 : %d\n", ps->num);
//	printf("학점 : %.1lf\n", ps->grade);
//
//}


// #3. 자기 참조 구조체 (중요)

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


// #2. 구조체 배열

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
//		{"홍길동", 23, "111-1111", "울릉도 독도"},
//		{"이순신", 35, "222-2222", "서울 건천동"},
//		{"장보고", 19, "333-3333", "완도 처애진"},
//		{"유관순", 15, "444-4444", "충남 천안"},
//		{"안중근", 45, "555-5555", "황해도 해주"}
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



// #1.구조체 포인터의 사용

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
//	printf("국어 : %d\n", (*ps).kor);
//	printf("영어 : %d\n", ps->kor);
//	printf("수학 : %d\n", ps->kor);
//
//	return 0;
//}




// 17 -1 : 구조체

// #4. 구조체 선언과 동시에 초기화하기 / 구조체 변수를 함수 매개변수에 사용하기

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
//	printf("시력 입력 : %.1lf  %.1lf\n", robot.left, robot.right);
//	//scanf("%lf%lf", &(robot.left), &(robot.right));
//	robot = exchange(robot);
//	printf("바뀐 시력 :%.1lf  %.1lf\n", robot.left, robot.right);
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

// #3. 구조체의 멤버로 다른 구조체 사용하기

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
//	printf("나이 : %d\n", yuni.pf.age);
//	printf("키 : %.1lf\n", yuni.pf.height);
//	printf("학번 : %d\n", yuni.id);
//	printf("학점 : %.1lf\n", yuni.grade);
//
//	return 0;
//
//}

// #2. 다양한 구조체 멤버

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
//	strcpy(yuni.name, "김혜민");
//	yuni.age = 27;
//	yuni.height = 172.5;
//
//	yuni.intro = (char*)malloc(80);
//	printf("자기소개 : ");
//	gets(yuni.intro);
//
//	printf("이름 : %s\n", yuni.name);
//	printf("나이 : %d\n", yuni.age);
//	printf("키 : %.1lf\n", yuni.height);
//	printf("자기소개 : %s\n", yuni.intro);
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
//	printf("학번 :%d\n", s1.num);
//
//	printf("학점 :%.1lf\n", s1.grade);
//
//	return 0;
//
//}




// 16장 - 메모리 동적 할당
//16장 - 2 : 동적 할당 저장 공간의 활용


//16장 - 1 : 동적 할당 함수
//  #2. 기타 동적 할당 함수 < realloc >

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
//		printf("양수만 입력하세요 => ");
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


//  #1. 동적 할당 영역을 배열처럼 사용
 
//int main(void)
//{
//	int *pi;
//	int i, sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int)); // 4바이트 * 5 = 20바이트
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다!\n");
//		exit(1);
//	}
//
//	printf("다섯 명의 나이를 입력하세요 : ");
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]); // pi가 정수형으로 선언되었고, 동적할당공간이 int형 정수를 5개(20바이트)를 저장할 수 있으므로
//		sum += pi[i];		 // 배열처럼 정수 5개 받아서 저장
//	}
//
//	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
//	free(pi);
//
//	return 0;
//}