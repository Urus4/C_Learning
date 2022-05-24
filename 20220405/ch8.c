#include <stdio.h>

int main(void) {
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;

}















//#2
//int main(void) {
//
//	int score[
//		5];
//	int i;
//
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < count; i++) {
//		scanf("%d", &score[i]);
//	}
//	for (i = 0; i < count; i++) {
//		total += score[i];
//	}
//	
//	avg = total / (double)count;
//	
//	for (i = 0; i < count; i++) {
//		printf("%5d", score[i]);
//	}
//
//	printf("\n");
//		
//	printf("평균 : %.1lf\n", avg);
//
//	return 0;
//}



//#1
//전역변수로 초기화 하면 데이터영역에 선언되므로 자동으로 0으로 초기화가 된다.
//int main(void) {
//
//	int ary[5];
//	
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[1]+ary[0];
//
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);
//
//	return 0;
//}