//右下直角の直角二等辺三角形表示
#include<stdio.h>

//文字chをn個連続表示
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main(void)
{
	int len;

	printf("右下直角二等辺三角形作る\n");
	printf("短辺：");
	scanf("%d",&len);

	int i;
	for (i = 1; i <= len; i++) {
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}

	return 0;
}