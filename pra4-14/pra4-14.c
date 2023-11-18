//1からnまでの和を求める

#include<stdio.h>

int main(void)
{
	int sum = 0; //合計値
	int n;

	printf("nの値 : ");
	scanf("%d", &n);

	int i;
	for (i = 1; i <= n; i++)
		sum += i;

	printf("１から%dまでの和は%dです。\n", n, sum);

	//値を逆に読む
	int tmp = sum;

	printf("%dを逆から読むと", tmp);
	while (tmp > 0)
	{
		printf("%d", tmp % 10);
		tmp /= 10;
	}
	puts("です");

	return 0;
}