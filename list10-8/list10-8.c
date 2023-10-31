//2つの整数を昇順に並べる

#include<stdio.h>

//xとyがさすオブジェクトの値を交換
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//*n1<=n2となるようにソート
void sort2(int* n1, int* n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int a, b;
	puts("2つの整数を入力");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	sort2(&a, &b);

	puts("これらの値を交換した");
	printf("整数Aは%dです\n", a);
	printf("整数Bは%dです\n", b);

	return 0;
}