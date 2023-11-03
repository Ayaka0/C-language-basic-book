//等価演算氏と関係演算子が生成する値を表示

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2つの整数を入力：");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	puts("等価式の値");
	printf("a == bの値：%d\n", a == b);
	printf("a != bの値：%d\n", a != b);

	puts("関係式の値");
	printf("a < bの値：%d\n", a < b);
	printf("a <= bの値：%d\n", a <= b);
	printf("a > bの値：%d\n", a > b);
	printf("a >= bの値：%d\n", a >= b);


	return 0;
}