//�ׂ�������߂�

#include<stdio.h>

//x��n���Ԃ�
double power(double x, int n)
{
	double tmp = 1.0;

	int i;
	for (i = 1; i <= n; i++)
		tmp *= x; //tmp��x���|����
	return tmp;
}

int main(void)
{
	double a;
	int b;

	printf("A��B������߂�\n");
	printf("����a : "); scanf("%lf", &a);
	printf("����b : "); scanf("%d", &b);

	printf("%.2f��%d���%.2f�ł��B\n", a, b, power(a, b));

	return 0;
}