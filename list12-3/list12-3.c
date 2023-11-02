//学生を表す構造体

#include<stdio.h>

#define NAME_LEN 64 //名前の文字列

//学生を表す構造体
struct student {
	char name[NAME_LEN];
	int height;
	double weight;
};

int main(void)
{
	struct student takao = { "tanaka", 173 };

	printf("氏名＝%s\n", takao.name);
	printf("身長＝%d\n", takao.height);
	printf("体重＝%.1f\n", takao.weight);


	return 0;
}