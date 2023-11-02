//5�l�̊w����g���̏����Ƀ\�[�g

#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

//�w����\���\����
typedef struct {
	char name[NAME_LEN];
	int height;
	double weight;
}Student;

//x�����y�������w��������
void swap_Student(Student* x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

//�w���̔z��a�̐擪n�̗v�f��g���̏����ɂ���
void sort_by_height(Student a[], int n)
{
	int i, j;


	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	Student std[] = {
		{"sato", 178,61.2},
		{"sanaka", 175, 62.5},
		{"takao", 173, 86.2},
		{"mike", 165,72.3},
		{"maasaki", 179,77.5},
	};

	int i;
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);

	sort_by_height(std, NUMBER);

	puts("�g�����Ƀ\�[�g���܂���");
	for (i = 0; i < NUMBER; i++)
		printf("% -8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);

		return 0;
}