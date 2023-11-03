//2つの整数値の大小比較判定

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2つの整数値を入力");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	if (a == b)
		printf("AとBは等しい。");
	else if (a > b)
		printf("AはBより大きい。");
	else
		printf("AはBより小さい。");


	return 0;
}