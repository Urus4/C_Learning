#include <stdio.h>
//#CH9

// <미니 정렬 프로그램>
//키보드로 실수3개를 입력한 다음 큰 숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램을 작성합니다.
//다음 코드와 출력 결과를 참고하여 line_up 함수를 작성하세요.
//line_up 함수에는 이미 정의도니 swap 함수를 호출하여 구현하세요.
#include <stdio.h>

void swqp(double* pa, double* pb);
void line_up(double* mxap, double* midp, double* minp);

int main(void) {

	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) {

	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp) {

	if (*maxp > *midp) {

		if (*maxp > *minp)
		{
			if (*midp > *minp)
			{
			}
			else swap(midp, minp);
		}
		else swap(maxp, minp);

	}
	else if (*midp > *minp)
	{
		if (*maxp > *minp) //
		{
			swap(maxp, midp);
		}
		else
		{
			swap(maxp, midp);
			swap(midp, minp);
		}
	}
	else
	{
		swap(maxp, minp);
	}
}




// #CH7

// 1부터 일정 수(n)까지의 합을 재귀호출을 사용해서 작성해보세요. 1부터 일정 수(n)까지의 합을 구하는 재귀호출 함수를 만들고 호출하여 구현합니다.
// 함수명은 다음과 같이 작성합니다.
//int rec_func(int n);
//
//int main(void) {
//
//
//}

//#CH6
 
//2이상의 정수를 입력하여 2부터 입력한 수까지의 모든 소수를 출력합니다.
//단, 한 줄에 5개 씩 5칸 간격으로 출력합니다. 하나의 정수가 소수인지를 판단해서 출력하는 과정은 다음과 같습니다.
// 1) 일단 소수라고 가정한다.
// 2) 2부터 그 정수보다 하나 작은 수까지 하나라도 나누어 떨어지면 가정을 취소한다.
// 3) 1의 가정이 2에서 바뀌지 않았으면 그 정수를 출력한다.
// 위의 1~3까지의 과정은 하나의 정수에 대해서 소수를 판별하는 과정이고 어떤 수까지의 모든 수를 판별하기 위해서는 1~3까지의 과정을 다시 반복합니다.
//int main(void) {
//
//	int a,b;
//
//	int count = 0;
//	printf("2 이상의 정수를 입력하세요 : ");
//	scanf_s("%d", &a);
//
//
//	for (int i = 2; i <= a; i++) {
//
//		for (int j = 2; j <= i; j++) {
//
//			if (i % j == 0 && i != 2) {
//				break;
//			}else if (i == 2) {
//				printf("%5d", i);
//				count++;
//				if (count % 5 == 0)
//					printf("\n");
//			}
//			else if (j == i - 1) {
//				printf("%5d", i);
//				count++;
//				if (count % 5 == 0)
//					printf("\n");
//			}
//		}
//
//	}	
//}


//#CH5.2

// 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요.
// 정수 사칙연산만 입력합니다.
// 실행결과1 ---> 사칙연산 입력(정수) : 11/3 (엔터) ---> 11/3=3
// 실행결과2 ---> 사칙연산 입력(정수) : 10-6 (엔터) ---> 10-6=4
//int main(void) {
//
//	int x=0, y=0;
//	int result = 0;
//	char cal;
//
//	printf("사칙연산 입력(정수) : ");
//	scanf_s("%d%c%d", &x, &cal, &y);
//
//	switch(cal)
//	{
//		case '+':
//			result = x + y;
//			break;
//		case '-':
//			result = x - y;
//			break;
//		case '*':
//			result = x * y;
//			break;
//		case '/':
//			result = x / y;
//			break;
//		default:
//			printf("다른 연산자를 넣어주십시오.");
//			return 0;
//	}
//
//	printf("%d%c%d=%d", x, cal, y, result);
//
//	return 0;
//}


//#CH5.1

//int main(void) {
//
//	int age = 25, chest = 95;
//
//	char size;
//
//	if (age < 20)
//	{
//		if (chest < 85) {
//			size = 'S';
//		}
//		else if (85 <= chest < 95) {
//			size = 'M';
//		}
//		else
//			size = 'L';
//
//	}
//	else
//	{
//		if (chest < 90) {
//			size = 'S';
//		}
//		else if (90 <= chest < 100) {
//			size = 'M';
//		}
//		else
//			size = 'L';
//
//
//	}
//
//	printf("사이즈는 %c입니다. \n", size);
//
//}