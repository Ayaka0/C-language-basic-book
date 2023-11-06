//2‚Â‚Ì®”’l‚Å10ˆÈãˆÈ‰º‚Ì”»’è

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2‚Â‚Ì®”‚ğ“ü—Í");

	printf("®”A : "); scanf("%d", &a);
	printf("®”B : "); scanf("%d", &b);

	int result = a - b;

	if (result > 10 || result < -10) {
	printf("‚»‚ê‚ç‚Ì·‚Í11ˆÈã‚Å‚·B\n");
	}else{
		printf("‚»‚ê‚ç‚Ì·‚Í10ˆÈ‰º‚Å‚·B\n");
}

	return 0;
}