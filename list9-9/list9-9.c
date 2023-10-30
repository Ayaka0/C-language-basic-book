//•¶š—ñ‚ğ‘–¸‚µ‚Ä•\¦

#include<stdio.h>

void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

int main(void)
{
	char str[128];

	printf("•¶š—ñ‚ğ“ü—Í‚¹‚æ");
	scanf("%s", str);

	printf("‚ ‚È‚½‚Í");
	put_string(str);
	printf("‚Æ“ü—Í‚µ‚½\n");
	return 0;
}