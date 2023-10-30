//文字列の配列を表示

#include<stdio.h>

//文字列の配列を表示
void put_strary2(const char s[][6], int n)
{
	int i = 0;
	for (i = 0; i < n; i++) {
		int j = 0;
		printf("s[%d] = \"", i);

		while (s[i][j])
			putchar(s[i][j++]);
		puts("\"");
	}
}

int main(void)
{
	char cs[][6] = { "turbo", "na", "dohc" };

	put_strary2(cs, 3);

	return 0;
}