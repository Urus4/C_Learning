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
	printf("%d",sum); // 이때 main 함수의  sum과 add함수의 sum은 서로 다른 변수이므로 printf의 결과값은 0이 나온다
	
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
//	// printf("c:%d\n", c); 변수c가 초기화가 되지 않아서 컴파일 에러가 남,
//	// F10(프로시져 단위 실행)을 통한 디버깅으로 한단한단 변수 변화값 확인하기
//
//	return 0;
//}



//int main(void)
//{
//	//int ptr[] = "first"; // ptr = &ptr[0], 배열이름 ptr은 문자열의 주소를 나타냄
//	//int* ptr0 = "two"; //
//	int data = 20;
//
//
//	printf("%d\n", 'A');  //%c는 문자 하나만 출력 (변수가 주소로 들어가야한다.
//	printf("%s\n", "A");  //%s는 문자열 출력
//	printf("%c은 %s입니다.\n", '1',"first");  // "
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
//  컴파일 중 에러가 나면 아래 오류 목록에 코드를 확인할 수 있는데 
//  코드의 C는 컴파일 에러, LNK은 링크 에러를 말함
//  지역변수 - '중괄호' 안 에서'만' 사용가능, 그 밖에선 사용x