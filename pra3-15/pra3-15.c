//奇数か偶数かの判定

#include<stdio.h>

int main(void)
{
	int no;
	printf("整数を入力：");
	scanf("%d", &no);

	if (no % 2)
		printf("その数は奇数です。\n");
	else
		printf("その数は偶数です。\n");

	return 0;
}