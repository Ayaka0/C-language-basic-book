//2�̐����̘a�ƍ������߂�(�G���[)


#include<stdio.h>

//n1��n2�̘a�ƍ���sum��diff�Ɋi�[
void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = n1 > n2 ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int a, b;
	int wa = 0, sa = 0;

	puts("2�̐�������͂���");
	printf("����A"); scanf("%d", &a);
	printf("����B"); scanf("%d", &b);

	sum_diff(a, b, wa, sa);

	printf("�a��%d�ō���%d�ł��B\n", wa, sa);

	return 0;
}