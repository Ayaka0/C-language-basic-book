//EΊΌpΜΌpρΣOp`\¦
#include<stdio.h>

//ΆchπnΒA±\¦
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main(void)
{
	int len;

	printf("EΊΌpρΣOp`μι\n");
	printf("ZΣF");
	scanf("%d",&len);

	int i;
	for (i = 1; i <= len; i++) {
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}

	return 0;
}