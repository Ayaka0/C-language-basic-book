//標準入力空の入力を標準にコピーする

#include<stdio.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF) //読み込んだ文字をchに代入し、EOFと等しくなければchを表示
		putchar(ch);

	return 0;
}
