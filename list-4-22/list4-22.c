//読み込んだ整数の個数だけ＊を連続表示

#include<stdio.h>

int main(void)
{
	int retry;

	do {
		int no;
		do {
			printf("正の整数を入力");
			scanf("%d", &no);
			if (no <= 0)
				puts("正でない数を入力しないで。");
		} while (no <= 0);
			//noが0以上の場合
		int i;
		for (i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("もう一度【yes…0 / No…9】：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}