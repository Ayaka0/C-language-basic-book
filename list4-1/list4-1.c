//読み込んだ整数値は奇数か偶数か

#include<stdio.h>

int main(void)
{
	int retry; //処理を続けるか

	do {
		int no;
		printf("整数を入力せよ。");
		scanf("%d", &no);

		if (no % 2)
			puts("その数は奇数。");
		else
			puts("その数は偶数。");

		printf("もう一度？【yes …0 / No…1】：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}