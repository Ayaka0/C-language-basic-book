//2�̐����l����������

#include<stdio.h>

//2�l�̌���
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a, b;

	puts("2�̐��������");
	printf("����A�F"); scanf("%d", &a);
	printf("����B�F"); scanf("%d", &b);

	swap(&a, &b);

	puts("�����̒l����������");
	printf("����A��%d�ł�\n", a);
	printf("����B��%d�ł�\n", b);

	return 0;
}