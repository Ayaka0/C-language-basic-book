//10の倍数か判定

#include<stdio.h>

int main(void)
{
	int no;

	printf("整数を入力 :");
	scanf("%d", &no);

	if (no % 10) //10で割り切れない
		printf("１０の倍数ではない。");
	else
		printf("１０の倍数です。");

	return 0;
}