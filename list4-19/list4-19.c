//長方形の描画

#include<stdio.h>

int main(void)
{
	int height, width;

	puts("長方形を表示");
	printf("高さ："); scanf("%d", &height);
	printf("横幅："); scanf("%d", &width);

	int i, j;
	for (i = 1; i <= height; i++) { //長方形はheight行
		for (j = 1; j <= width; j++) //各行にwidthの'*'を表示
			putchar('*');
		putchar('\n');
	}

	return 0;
}