//2ÂÌ®ÌaÆ·ðßé

#include<stdio.h>

//n1Æn2ÌaÆ·ð*sumÆ*diffÉi[
void sum_diff(int n1, int n2, int* sum, int* diff)
{
	*sum = n1 + n2;
	*diff = n1 > n2 ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int a, b;
	int wa = 0, sa = 0;

	puts("2ÂÌ®ðüÍ");
	printf("®A"); scanf("%d", &a);
	printf("®B"); scanf("%d", &b);

	sum_diff(a, b, &wa, &sa);

	printf("aÍ%dÅ·Í%dÅ·B\n", wa, sa);

	return 0;
}