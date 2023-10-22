//指示された個数だけ整数を読み込んで合計値と平均値を表示

#include<stdio.h>

int main(void)
{
	int num;

	printf("整数は何個：");
	scanf("%d", &num);

	int sum = 0; //合計値
	int i; //カウント宣言

	//入力した整数の個数以上になるまで加算で繰り返す
	for (i = 1; i <= num; i++) {
		int tmp;
		printf("No.%d:", i);
		scanf("%d", &tmp); //numで入力した個数回数分、値を入力する
		sum += tmp; //入力した値を毎回合計加算
	}

	printf("合計値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / num);


	return 0;
}