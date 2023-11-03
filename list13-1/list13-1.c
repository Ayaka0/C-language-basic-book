//10‚Ì”{”‚©”»’è

#include<stdio.h>

int main(void)
{
	int no;

	printf("®”‚ğ“ü—Í :");
	scanf("%d", &no);

	if (no % 10) //10‚ÅŠ„‚èØ‚ê‚È‚¢
		printf("‚P‚O‚Ì”{”‚Å‚Í‚È‚¢B");
	else
		printf("‚P‚O‚Ì”{”‚Å‚·B");

	return 0;
}