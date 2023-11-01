//strcmpŠÖ”‚ÆstrncmpŠÖ”

#include<stdio.h>
#include<string.h>

int main(void)
{
	char s2[128];

	puts("\ABCDE\"‚Æ‚Ì”äŠr‚ğs‚¤");
	puts("\"XXXXX\"‚ÅI—¹");

	while (1)
	{
		printf("\n•¶š—ñs2F");
		scanf("%s",s2);

		if (strcmp(s2,"XXXXX") == 0)
			break;
		printf("strcmp(\"ABCDE\", s2) = %d\n", strcmp("ABCDE", s2));
		printf("strncmp(\"ABCDE\", s2, 3) = %d\n", strncmp("ABCDE", s2, 3));
	}

	return 0;
}