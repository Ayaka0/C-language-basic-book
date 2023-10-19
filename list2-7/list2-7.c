//2つの実数値の和差積商を実数で表示
#include<stdio.h>

int main(void)
{
	double x, y; //浮動小数点

	puts("2つの実数を入力せよ。");
	printf("実数x："); scanf("%lf", &x);
	printf("実数y："); scanf("%lf", &y);

	printf("x + y = %f\n", x + y);
	printf("x - y = %f\n", x - y);
	printf("x * y = %f\n", x * y);
	printf("x / y = %f\n", x / y);

	return 0;
}