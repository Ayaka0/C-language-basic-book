//2つの整数の大きい方の値を求める

#include<stdio.h>

//大きい方を返す
int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int n1, n2;

	puts("2つの整数を入力");
	printf("整数１："); scanf("%d", &n1);
	printf("整数2："); scanf("%d", &n2);

	printf("大きい方の値は%dです。\n", max2(n1, n2));

	return 0;
}