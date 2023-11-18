//読み込んだ正の整数値の桁数を表示

#include<stdio.h>

int main(void)
{
	int no; 
	do {
		printf("正の整数を入力せよ”");
		scanf("%d", &no);
		if (no <= 0)
			puts("正ではない数を入力しない");
	} while (no <= 0);

	//noは0より大きくなっている

	//入力した値を逆から読み込んだ表示
	int tmp = no;
	printf("%dを逆から読むと", tmp);
	while (tmp > 0) {
		printf("%d", tmp % 10);
		tmp /= 10;
	}
	puts("です。");


	//入力した桁数の表示
	int temp = no; //上で入力した変数noをint型tempに格納
	int digits = 0; //桁数

	while (temp > 0) {
		temp /= 10; //右に1桁ずらす
		digits++;
	}
	printf("%dは%d桁です。", no, digits);


	return 0;
}