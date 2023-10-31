//2つの整数値を交換する

#include<stdio.h>

//2値の交換
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a, b;

	puts("2つの整数を入力");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	swap(&a, &b);

	puts("これらの値を交換した");
	printf("整数Aは%dです\n", a);
	printf("整数Bは%dです\n", b);

	return 0;
}