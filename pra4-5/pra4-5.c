//整数値をカウントアップ

#include<stdio.h>

int main(void)
{
	int no;

	printf("整数を入力：");
	scanf("%d", &no);

	int i = 1;
	while (i <= no) {
		printf("%d ", i);
		i++;
	}



	return 0;
}