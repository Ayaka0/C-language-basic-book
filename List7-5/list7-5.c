//zñÌvfðßé

#include<stdio.h>

int main(void)
{
	int a[5];
	double x[7];

	printf("zñaÌvf = %zu\n", sizeof(a) / sizeof(a[0]));
	printf("zñxÌvf = %zu\n", sizeof(x) / sizeof(x[0]));

	return 0;
}