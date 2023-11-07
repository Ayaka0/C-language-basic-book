//2つの整数が等しいか判定、大小の判定

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2つの整数を入力");

	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	

	if (a == b) {
		printf("2つの値は同じです。\n");
	}
	else if (a > b) {
		printf("小さい方は%dです\n", b);
		printf("大きい方は%dです\n", a);
	}
	else {
		printf("小さい方は%dです\n", a);
		printf("大きい方は%dです\n", b);
	}


	return 0;
}