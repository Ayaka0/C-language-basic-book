//読み込んだ整数の個数だけ1234567890を繰り返し表示

#include<stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ；");
	scanf("%d", &no);

	int i;
	for (i = 1; i <= no; i++)
		printf("%d", i % 10); //iを10で割った余りを表示
	putchar('\n');

	/*int q = no / 10; //1234567890の個数
	int r = no % 10; //残りの個数

	int i;
	for(i = 1; i <= q; i++)
	printf("1234567890");

	for(i = 1; i <= r; i++)
	printf("%d", i % 10);
	putchar("\n");
	
	
	*/


	return 0;
}