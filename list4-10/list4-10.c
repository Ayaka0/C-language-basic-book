//読み込んだ正の整数値を逆順に表示

#include<stdio.h>

int main(void)
{
	//入力した値が正か負の判定処理
	int no;

	do {
		printf("正の整数を入力せよ：");
		scanf("%d", &no);
		if (no <= 0)
			puts("正ではない数を入力しないで。");
	} while (no <= 0);

	//noは0より大きくなっている
	printf("その数を逆から読むと");
	while (no > 0) {
		printf("%d", no % 10); //最下位の桁の値を表示
		no /= 10;
	}
	puts("です。");

	return 0;
}