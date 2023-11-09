//入力した整数値を偶数値のみ表示

#include<stdio.h>

int main(void)
{
	int no;
	printf("正の整数値を入力：");
	scanf("%d", &no);

	
	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d ",i);
			i += 2;
		}
	}



	return 0;
}