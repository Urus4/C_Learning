
#include<stdio.h>

int main()
{
	int k = 0;
	int s = 0;
	while (1) {
		s = s + k;
		k++;
		if (k > 100)
			continue;
		else break;     //과 if(k>100) break; 의 효율성 차이? 

	}
		printf("%d\n", s);

		return 0;
}