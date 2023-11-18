//1‚©‚çn‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚é

#include<stdio.h>

int main(void)
{
	int sum = 0; //‡Œv’l
	int n;

	printf("n‚Ì’l : ");
	scanf("%d", &n);

	int i;
	for (i = 1; i <= n; i++)
		sum += i;

	printf("‚P‚©‚ç%d‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", n, sum);

	//’l‚ğ‹t‚É“Ç‚Ş
	int tmp = sum;

	printf("%d‚ğ‹t‚©‚ç“Ç‚Ş‚Æ", tmp);
	while (tmp > 0)
	{
		printf("%d", tmp % 10);
		tmp /= 10;
	}
	puts("‚Å‚·");

	return 0;
}