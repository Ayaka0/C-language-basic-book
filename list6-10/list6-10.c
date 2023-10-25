//最高点を求める

#include<stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);

int main(void)
{
	extern int tensu[];

	printf("%d人の点数を入力\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("%d : ", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("最高点＝%d\n", top());

	return 0;
}

//配列tensuの最大値を返す関数
int top(void)
{
	extern int tensu[];
	int max = tensu[0];

	int i;
	for (i = 0; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}