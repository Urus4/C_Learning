#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double score;

};
typedef struct student Student;

void print_st(Student *st);
void input_st(Student *st);

int main(void) {

	Student st[2] = { { 1, "ABC", 85.0 },{ 2, "DEF", 95.1 } };

	input_st(st);
	print_st(st);
	return 0;
}


void print_st(Student *st)
{

	for (int i = 0; i < 2; i++)
	{
		//printf(" %d %s %.1lf \n", st[i].number, st[i].name, st[i].score );	// �����ͷ� �޾�����, �迭ó�� ����
		printf(" %d %s %.1lf \n", (*st).number, (*st).name, (*st).score);		// �ּҸ� �����ϰ�, ���� �����ϱ�
		printf(" %d %s %.1lf \n", st-> number, st->name, st->score);			// ' -> ' �̿��Ͽ� ����
		
		st++;
	}

}

void input_st(Student *st)
{
	strcpy(st[0].name, "abc");
	strcpy(st[1].name, "def");
}