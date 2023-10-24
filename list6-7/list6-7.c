//左下直角の直角二等辺三角形を表示

#include<stdio.h>

//記号文字*をn個連続表示
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int len;

	printf("左下直角二等辺三角形を作る。\n");
	printf("短辺 : ");
	scanf("%d", &len);

	int i;
	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}