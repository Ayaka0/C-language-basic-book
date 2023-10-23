//配列の各要素に先頭から順に1～5を代入して表示

#include<stdio.h>

int main(void)
{
	int a[5];

	int i;
	for (i = 0; i < 5; i++) //要素に値を代入
		a[i] = i + 1;

	for (i = 0; i < 5; i++) //要素の値を代入
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}