//1����n�܂ł̘a�����߂�

#include<stdio.h>

int main(void)
{
	int sum = 0; //���v�l
	int n;

	printf("n�̒l : ");
	scanf("%d", &n);

	int i;
	for (i = 1; i <= n; i++)
		sum += i;

	printf("�P����%d�܂ł̘a��%d�ł��B\n", n, sum);

	//�l���t�ɓǂ�
	int tmp = sum;

	printf("%d���t����ǂނ�", tmp);
	while (tmp > 0)
	{
		printf("%d", tmp % 10);
		tmp /= 10;
	}
	puts("�ł�");

	return 0;
}