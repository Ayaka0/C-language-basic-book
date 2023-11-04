//2つの整数値を読み込み差を求める

#include<stdio.h>

int main(void)
{
	int n1, n2, result;

	puts("2つの整数を入力");
	printf("整数１："); scanf("%d", &n1);
	printf("整数２："); scanf("%d", &n2);

	if (n1 > n2) {
		result = n1 - n2;
		printf("それらの差は%dです。\n", result);
	}
	else {
		result = n2 - n1;
		printf("それらの差は%dです。\n", result);
	}
	return 0;
}