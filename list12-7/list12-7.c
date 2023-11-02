//5人の学生を身長の昇順にソート

#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

//学生を表す構造体
typedef struct {
	char name[NAME_LEN];
	int height;
	double weight;
}Student;

//xおよびyがさす学生を交換
void swap_Student(Student* x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

//学生の配列aの先頭n個の要素を身長の昇順にあう
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

	puts("身長順にソートしました");
	for (i = 0; i < NUMBER; i++)
		printf("% -8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);

		return 0;
}