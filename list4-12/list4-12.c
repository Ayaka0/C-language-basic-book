//読み込んだ正の整数値までカウントアップ（for文）

#include<stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力 : ");
	scanf("%d", &no);

	int i; //indexの宣言
	for (i = 0; i <= no; i++) //入力したnoの値以上になるまで繰り返す
		printf("%d ", i);
	putchar('\n');

	return 0;
}