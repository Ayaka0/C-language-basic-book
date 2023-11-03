//整数値の符号判定

#include<stdio.h>

int main(void)
{
	int no;

	puts("整数値を入力");
	scanf("%d", &no);

	if (no == 0)
		printf("その数は０です。\n");
	else if (no > 0)
		printf("その数は正です。\n");
	else
		printf("その数は負です。\n");

	return 0;
}