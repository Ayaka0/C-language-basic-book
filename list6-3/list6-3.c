//2ÂÌ®Ì2ælÌ·ðßé

#include<stdio.h>

//nÌ2ælðÔ·
int sqr(int n)
{
	return n * n;
}

//aÆbÌ·ðÔ·
int diff(int a, int b)
{
	return a > b ? a - b : b - a;
}


int main(void)
{
	int x, y;

	puts("2ÂÌ®ðüÍ¹æ");
	printf("®x : "); scanf("%d", &x);
	printf("®y : "); scanf("%d", &y);

	printf("xÌ2æÆyÌ2æÌ·Í%dB\n", diff(sqr(x), sqr(y)));

	return 0;
}