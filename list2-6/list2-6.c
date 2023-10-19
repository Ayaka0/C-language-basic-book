//整数と浮動小数点

#include<stdio.h>

int main(void)
{
	int n; //整数
	double x; //浮動小数点

	n = 9.99;
	x = 9.99;

	printf("int 型変数　nの値：%d\n", n);
	printf("int 型変数　n / 2：%d\n", n / 2);

	printf("double 型変数　xの値：%f\n", x);
	printf("double 型変数　x / 2.0の値：%f\n", x / 2.0);

	return 0;
}