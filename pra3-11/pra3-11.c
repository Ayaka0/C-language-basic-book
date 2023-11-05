//3つの整数値判定

#include<stdio.h>

int main(void)
{
	int a, b, c;

	puts("3つの整数を入力");
	printf("整数A : "); scanf("%d", &a);
	printf("整数B : "); scanf("%d", &b);
	printf("整数C : "); scanf("%d", &c);

	if (a == b == c)
		printf("3つの値は等しい。\n");
	else if (a == b || b == c || a == c)
		printf("2つの値は等しい\n");
	else
		printf("3つの値は異なる。");



	return 0;
}