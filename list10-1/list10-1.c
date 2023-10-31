//2‚Â‚Ì®”‚Ì˜a‚Æ·‚ğ‹‚ß‚é(ƒGƒ‰[)


#include<stdio.h>

//n1‚Æn2‚Ì˜a‚Æ·‚ğsum‚Ædiff‚ÉŠi”[
void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = n1 > n2 ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int a, b;
	int wa = 0, sa = 0;

	puts("2‚Â‚Ì®”‚ğ“ü—Í‚¹‚æ");
	printf("®”A"); scanf("%d", &a);
	printf("®”B"); scanf("%d", &b);

	sum_diff(a, b, wa, sa);

	printf("˜a‚Í%d‚Å·‚Í%d‚Å‚·B\n", wa, sa);

	return 0;
}