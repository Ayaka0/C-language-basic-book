//入力した整数値を逆順にする

#include<stdio.h>

int main(void)
{
	int no;
	
	do {
		printf("正の整数を入力：");
		scanf("%d", &no);
		if (no <= 0)
			puts("正ではない数を入力しない");
	} while (no <= 0);

	//noが0より大きい場合
	printf("逆から読むと");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("です。");

	return 0;
}