//2�̐����l��ǂݍ��ݍ������߂�

#include<stdio.h>

int main(void)
{
	int n1, n2, result;

	puts("2�̐��������");
	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);

	if (n1 > n2) {
		result = n1 - n2;
		printf("�����̍���%d�ł��B\n", result);
	}
	else {
		result = n2 - n1;
		printf("�����̍���%d�ł��B\n", result);
	}
	return 0;
}