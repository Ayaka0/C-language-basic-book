//＊を入力した数値の分だけ縦に表示

#include<stdio.h>

int main(void)
{
	int no;

	printf("整数を入力：");
	scanf("%d", &no);

	if (no > 0) {
		int i = 1;
		while (i <= no) {
			putchar('*');
			putchar('\n');
			i++;
		}
	}


	return 0;
}