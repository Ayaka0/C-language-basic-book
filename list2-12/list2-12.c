//整数浮動小数点を書式かして表示
#include<stdio.h>

int main(void)
{
	printf("[%d]\n", 123);
	printf("[%.4d]\n", 123);
	printf("[%4d]\n", 123);
	printf("[%04d]\n", 123);
	printf("[%-4d]\n", 123);

	printf("[%d]\n", 12345);
	printf("[%.3d]\n", 12345);
	printf("[%3d]\n", 12345);
	printf("[%03d]\n", 12345);
	printf("[%-3d]\n", 12345);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%6.1f]\n", 123.13);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%4.1f]\n", 123.13);

	return 0;
}