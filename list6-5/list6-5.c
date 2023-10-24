//‚×‚«æ‚ğ‹‚ß‚é

#include<stdio.h>

//x‚Ìnæ‚ğ•Ô‚·
double power(double x, int n)
{
	double tmp = 1.0;

	int i;
	for (i = 1; i <= n; i++)
		tmp *= x; //tmp‚Éx‚ğŠ|‚¯‚é
	return tmp;
}

int main(void)
{
	double a;
	int b;

	printf("A‚ÌBæ‚ğ‹‚ß‚é\n");
	printf("À”a : "); scanf("%lf", &a);
	printf("À”b : "); scanf("%d", &b);

	printf("%.2f‚Ì%dæ‚Í%.2f‚Å‚·B\n", a, b, power(a, b));

	return 0;
}