//strcmp関数とstrncmp関数

#include<stdio.h>
#include<string.h>

int main(void)
{
	char s2[128];

	puts("\ABCDE\"との比較を行う");
	puts("\"XXXXX\"で終了");

	while (1)
	{
		printf("\n文字列s2：");
		scanf("%s",s2);

		if (strcmp(s2,"XXXXX") == 0)
			break;
		printf("strcmp(\"ABCDE\", s2) = %d\n", strcmp("ABCDE", s2));
		printf("strncmp(\"ABCDE\", s2, 3) = %d\n", strncmp("ABCDE", s2, 3));
	}

	return 0;
}