//3つの値の最小値を求める

#include<stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("3つの整数を入力");

	printf("整数１："); scanf("%d", &n1);
	printf("整数２："); scanf("%d", &n2);
	printf("整数３："); scanf("%d", &n3);
	
	printf("最小値は%dです。\n", (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3));

	return 0;
}