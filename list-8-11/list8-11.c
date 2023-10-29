//標準入力から読み込まれた数字文字をカウントする

#include<stdio.h>

int main(void)
{
	int ch;
	int cnt[10] = { 0 }; //数字文字の回数

	while ((ch = getchar()) != EOF)
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;

	puts("数字文字の回数");
	int i;
	for (i = 0; i < 10; i++)
		printf("'%d' : %d\n", i, cnt[1]);

	return 0;
}