//入力した整数値の分だけ＊を表示

#include<stdio.h>

int main(void)
{
	int no;

	printf("正の整数値：");
	scanf("%d", &no);

	
	if (no > 0) {
		int i = 0;
		while (i < no)
			putchar('*', i++);
	}
	

	return 0;
}