//整数の2乗と浮動小数点数の2乗
#include<stdio.h>

//int型整数の2乗値を求める
int sqr_int(int x)
{
	return x * x;
}

//double型浮動小数点数の2乗値を求める
double sqr_double(double x)
{
	return x * x;
}

int main(void)
{
	int n;
	double x;

	printf("整数を入力せよ。");
	scanf("%d", &n);
	printf("その数の2乗は%dです。\n", sqr_int(n));

	printf("実数を入力せよ。");
	scanf("%lf", &x);
	printf("その数の2乗は%fです。\n", sqr_double(x));


	return 0;
}