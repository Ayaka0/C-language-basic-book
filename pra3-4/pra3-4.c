//絶対値の判定

#include<stdio.h>

int main(void)
{
	int no;
	int result;

	puts("整数を入力");
	scanf("%d", &no);

	if (no < 0) {
		result = no * -1;
		printf("絶対値は%dです。", result);
	} else {
	printf("絶対値は%dです。", no);
	}

	return 0;
}