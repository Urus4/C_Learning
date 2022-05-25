#include <stdio.h>
char* my_strcat(char* pd, char* ps);
int main(int argc, char* argv[])
{
	char fruit[80] = "straw";

	printf("fruit : %s\n", fruit);
	my_strcat(fruit, "berry");
	printf("연결된 문자열 : %s\n", fruit);
	return 0;

}

char* my_strcat(char* pd, char* ps) {

	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';
		return po;
	 
}