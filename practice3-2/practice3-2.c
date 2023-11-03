//約数判定

#include<stdio.h>

int main(void)
{
	int no1, no2;

	puts("2つの整数を入力");
	printf("整数１："); scanf("%d", &no1);
	printf("整数２："); scanf("%d", &no2); 

	if (no1 % no2 == 0)
		printf("No2はNo1の約数です。\n");
	else
		printf("No2はNo1の約数ではありません。\n");
}