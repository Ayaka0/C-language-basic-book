//成績の不可を判定

#include<stdio.h>

int main(void)
{
	int score;

	printf("点数："); scanf("%d", &score);

	if (score < 0 || score > 100)
		printf("不正な点数\n");
	else if(score <= 59)
		printf("不可\n");
	else if(score <= 69)
		printf("可\n");
	else if(score <= 79)
		printf("良n");
	else 
		printf("優\n");




	return 0;
}