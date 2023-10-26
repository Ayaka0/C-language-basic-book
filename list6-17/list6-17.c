//Ž¯•ÊŽq‚Ì—LŒø”ÍˆÍ‚ð‚©‚­‚É‚ñ‚·‚é

#include<stdio.h>

int x = 75;

void print_x(void)
{
	printf("x = %d\n", x);
}

int main(void)
{
	int x = 999;
	int i;

	print_x();

	printf("x = %d\n", x);

	for (i = 0; i < 5; i++) {
		int x = i * 100;
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);


	return 0;
}