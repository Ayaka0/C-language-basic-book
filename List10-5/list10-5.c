//ポインタによって値の変更依頼

#include<stdio.h>

//pがさす変数に999を代入
void set999(int* p)
{
	*p = 999;
}

int main(void)
{
	int x = 123;
	int  y = 456;
	int sw;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("変更するのは[ 0 …x / 1…y] = ");
	scanf("%d", &sw);

	int* p;
	if (sw == 0)
		set999(&x);	//xの変更依頼
	else
		set999(&y); //pはyを指す

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}