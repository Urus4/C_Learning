#include<stdio.h>
// << 4-2 : 그 외 유용한 연산자 >>
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
//	printf("a/b의 결과 : %.1lf\n", res);
//
//	a = (int)res;
//	printf("(int)%.1lf의 결과:%d\n", res, a);
//	
//	
//	return 0;
//}
// << 4-1 : 산술 연산자,관계 연산자, 논리 연산자 >>
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
//	printf("초깃값 a=%d, b=%d\n", a, b);
//	printf("전위형: (++a)*3=%d,  후위형: (b++)*3=%d\n", pre, post);
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
//	printf("a의 값 : %d, b의 값 :%d\n", a, b);
//	printf(" 덧셈 : %d\n",sum);
//	printf(" 뺄셈 : %d\n",sub);
//	printf(" 곱셈 : %d\n",mul);
//	printf(" a의 음수 연산: %d\n", inv);
//
//	return 0;
//}


// <<3-2 데이터 입력>>
// #2
//int main(void)
//{
//	char data[20];
//	int grade;
//	char name[20];
//
//	printf("1번 입력 : ");
//	scanf("%s", data);
//	printf("학점 입력 : ");
//	scanf("%d", &grade);
//	printf("이름 입력 : ");
//	scanf("%s", name);
//	printf( "%s과목에서 %s의 학점은 %c입니다.\n",data, name, grade);
//
//	return 0;
//  // 화이트 스페이스 : 1번을 입력하기 위해 엔터를 누르면 그 엔터가 2번에 입력되면서 생략이 됨 -> 아스키코드로 인해 엔터, 백스페이스,탭 등을 문자로 인식하는 특성때문에 p.299참조
//  // scanf함수의 특징으로 인해 문자열 중간에 공백(스페이스)이 생기게 되면 그 공백을  null로 인식하기 때문에 그 문자 앞까지만 출력이 됨. 따라서 공백 없이 연속으로 입력해야함. 
//}
// #1
//int main(void)
//{
//	int a;
//
//	scanf("%d", &a);
//	printf("입력된 값: %c\n", a);
//
//
//	return 0;
//}


// <<const를 사용한 변수>>
// #2
//int main(void)
//{
//	const int income = 0;
//	int* ptr = &income;
//	double tax;
//	const double tax_rate = 0.12;
//
//	*ptr = 100; // const로 상수화된 변수도, 주소를 통해서 값 변경이 가능하다.
//
//	tax = income * tax_rate;
//	printf("세금은 : %.1lf입니다.\n", tax);
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
//	//tax_rate = 0.15; 라는 행이 추가되면 'l-value(저장공간)가 const 개체를 지정합니다'라는 에러가 뜸
//	//그런데 주소를 통해 값을 변경할 수 있다.!?
//
//	tax = income * tax_rate;
//	printf("세금은 : %.1lf입니다.\n", tax);
//
//	return 0;
//}


// <<문자열 저장>>
// #2
//int main(void)
//{
//	char fruit[20] = "strawberry";
//
//	printf("%s\n", fruit);
//	strcpy(fruit, "banana"); // 이 함수로 인해 에러가 뜨는데, 컴파일러의 종류(GCC, Visual Studio등)에 따라 달라질 수 있음
//	printf("%s\n", fruit);
//
//	return 0;
//
//}
// #1
//int main(void)
//{
//	char fruit[20] = "strawberry";  //크기 20, 인덱스를 지정해서 선언을 하면 크기변경은 불가능하다.
//	char fruit0[] = "strawberry";   //크기 11, 인덱스를 지정하지 않고 선언하면 크기는 문자순자+1(null문자) 이다.
//	char* ptr = fruit; // 포인터변수 ptr을 선언하고  배열fruit의 주소값을 대입
//
//	// fruit ="banana"; 불가능 -  fruit는 주소값을 갖는 상수.
//
//	printf("딸기:%s\n", fruit);
//	printf("딸기잼 : %s %s\n",fruit,"jam");
//	printf("좋아하는과일 : %s\n", ptr);
//
//	return 0;
//}