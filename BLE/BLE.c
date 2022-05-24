#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {

	char s1[30] = "data1#data2#data3";
	char* pary[5] = { NULL, };
	char* ptr = strtok(s1, "#");
	int i=0 ;


	while (ptr != NULL)
	{
		pary[i] = ptr;
		i++;
		ptr = strtok(NULL, "#");
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}


	//for (int i = 0; i < 30; i++)
	//{
	//	if (s1[i] != NULL)
	//		printf("%s\n", s1[i]);
	//}


	return 0;

}