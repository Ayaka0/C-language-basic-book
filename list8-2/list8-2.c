//������2��ƕ��������_����2��

#include<stdio.h>

#define sqr(x) ((x) * (x))	//x��2��l�����߂�֐��`���}�N��

int main(void)
{
	int n;
	double x;

	printf("��������͂���B");
	scanf("%d", &n);
	printf("���̐���2���%d�ł��B\n", sqr(n));

	printf("��������͂���B");
	scanf("%lf", &x);
	printf("���̐���2���%f�ł��B\n", sqr(x));

	return 0;
}