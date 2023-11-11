//数値のカウントアップ

#include<stdio.h>

int main(void)
{
	int no;

	printf("整数を入力：");
	scanf("%d", &no);

	printf("{ ");
	int i = 1;
	while (i < no) 
		printf("%d, ", i++);
	printf("%d}\n", no);
	

	return 0;
}