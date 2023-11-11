//“ü—Í‚µ‚½®”’l‚Ì•ª‚¾‚¯+-‚ğ•\¦

#include<stdio.h>

int main(void)
{
	int no;
	printf("®”‚ğ“ü—ÍF");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		while (i <= no) {
			if(i % 2)
			putchar('+');
	else
		putchar('-');
	i++;
		}
		putchar('\n');
	}

	return 0;
}