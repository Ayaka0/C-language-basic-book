//読み込んだ2つの整数値の大きい方の値を表示

#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("２つの整数を入力せよ。");
	printf("整数１："); scanf("%d", &n1);
	printf("整数２："); scanf("%d", &n2);

	int max = n1 > n2 ? n1 : n2; //大きい方の値でmaxを初期化

	printf("大きい方の値は%dです。\n", max);


	return 0;
}