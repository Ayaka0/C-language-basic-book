//¶ŗ¼pĢ¼pńÓOp`š\¦

#include<stdio.h>

//L¶*šnĀA±\¦
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int len;

	printf("¶ŗ¼pńÓOp`šģéB\n");
	printf("ZÓ : ");
	scanf("%d", &len);

	int i;
	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}