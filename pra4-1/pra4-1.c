//読み込んだ整数値を判定

#include<stdio.h>

int main(void)
{
	int retry;

	do {
		int no;

		printf("整数を入力："); scanf("%d", &no);
		printf("その数は%dです。\n", no);

		printf("もう一度？【Yes…0 / No…9】\n");
		scanf("%d", &retry);
	} while (retry == 0);
	return 0;
}