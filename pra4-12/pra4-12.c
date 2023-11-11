//“ü—Í‚µ‚½®”’l‚ğ‹t‡‚É‚·‚é

#include<stdio.h>

int main(void)
{
	int no;
	
	do {
		printf("³‚Ì®”‚ğ“ü—ÍF");
		scanf("%d", &no);
		if (no <= 0)
			puts("³‚Å‚Í‚È‚¢”‚ğ“ü—Í‚µ‚È‚¢");
	} while (no <= 0);

	//no‚ª0‚æ‚è‘å‚«‚¢ê‡
	printf("‹t‚©‚ç“Ç‚Ş‚Æ");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("‚Å‚·B");

	return 0;
}