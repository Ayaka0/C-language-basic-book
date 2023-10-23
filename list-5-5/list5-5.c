//配列の各要素を先頭から順に1～5で初期化して表示

#include<stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5}; //初期化

	int i;
	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]); //要素の値を表示

	return 0;
}