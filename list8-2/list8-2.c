//整数の2乗と浮動小数点数の2乗

#include<stdio.h>

#define sqr(x) ((x) * (x))	//xの2乗値を求める関数形式マクロ

int main(void)
{
	int n;
	double x;

	printf("整数を入力せよ。");
	scanf("%d", &n);
	printf("その数の2乗は%dです。\n", sqr(n));

	printf("実数を入力せよ。");
	scanf("%lf", &x);
	printf("その数の2乗は%fです。\n", sqr(x));

	return 0;
}