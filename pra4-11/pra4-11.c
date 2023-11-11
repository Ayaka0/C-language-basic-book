//–‚ğ“ü—Í‚µ‚½”’l‚Ì•ª‚¾‚¯c‚É•\¦

#include<stdio.h>

int main(void)
{
	int no;

	printf("®”‚ğ“ü—ÍF");
	scanf("%d", &no);

	if (no > 0) {
		int i = 1;
		while (i <= no) {
			putchar('*');
			putchar('\n');
			i++;
		}
	}


	return 0;
}