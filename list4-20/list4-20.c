//左下が直角の直角に等辺三角形を表示

#include<stdio.h>

int main(void)
{
	int len;

	puts("左下直角二等辺三角形を表示");
	printf("短辺：");
	scanf("%d", &len);

	int i, j;
	for (i = 1; i <= len; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}