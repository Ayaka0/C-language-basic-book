//�ǂݍ��񂾐����l�̑S�񐔂�\��

#include<stdio.h>

int main(void)
{
	int n;

	printf("�����l�F");
	scanf("%d", &n);

	int i;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);
	putchar('\n');

	return 0;
}