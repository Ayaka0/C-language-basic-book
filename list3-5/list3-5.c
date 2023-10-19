//読み込んだ整数値がゼロかどうか
#include<stdio.h>

int main(void)
{
	int num;

	printf("整数を入力せよ：");
	scanf("%d", &num);

	if (num)
		puts("その数はゼロではない。");
	else
		puts("その数はゼロ。");

	return 0;
}