//3�̐����̍ő�l�����߂�

#include <stdio.h>

//3�̐����̍ő�l��Ԃ�
int max3(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	return max;
}

int main(void)
{
	int a, b, c;

	puts("3�̐�������͂���");
	printf("����a : "); scanf("%d", &a);
	printf("����b : "); scanf("%d", &b);
	printf("����c : "); scanf("%d", &c);

	printf("�ő�l��%d�ł��B\n", max3(a, b, c));

	return 0;
}