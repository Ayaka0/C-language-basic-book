//2つの整数値で10以上以下の判定

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2つの整数を入力");

	printf("整数A : "); scanf("%d", &a);
	printf("整数B : "); scanf("%d", &b);

	int result = a - b;

	if (result > 10 || result < -10) {
	printf("それらの差は11以上です。\n");
	}else{
		printf("それらの差は10以下です。\n");
}

	return 0;
}