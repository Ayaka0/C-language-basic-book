//入力した整数値の分だけ+-を表示

#include<stdio.h>

int main(void)
{
	int no;
	printf("整数を入力：");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		while (i <= no) {
			if(i % 2)
			putchar('+');
	else
		putchar('-');
	i++;
		}
		putchar('\n');
	}

	return 0;
}