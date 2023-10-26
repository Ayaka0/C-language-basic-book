//静的記憶期間をもつオブジェクトの暗黙の初期化を確認

#include<stdio.h>

int fx;

int main(void)
{
	static int si;
	static double sd;
	static int sa[5];

	printf("fx = %d\n", fx);
	printf("fx = %d\n", si);
	printf("fx = %d\n", sa[5]);

	int i;
	for (i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);

	return 0;
}