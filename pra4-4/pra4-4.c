//整数値を1まで読み込みカウントダウン

#include<stdio.h>

int main(void)
{
	int no;

	printf("整数値を入力：");
	scanf("%d", &no);

	while (no > 0) {
		printf("%d ", no);
		no--;
	}




	return 0;
}