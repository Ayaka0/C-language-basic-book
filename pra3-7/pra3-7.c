//3つの整数値の最小を求める
#include<stdio.h>

int main(void)
{
	int a, b, c;

	puts("3つの整数を入力");

	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);
	printf("整数3："); scanf("%d", &c);

	int min;
	min = a;
	if (min > b && b < c) {
		printf("最小値は%dです。\n", b);
	}
	else if (min > c && c < b) {
		printf("最小値は%dです。\n", c);
	}
	else
		printf("最小値は%dです。\n", a);


	return 0;
}