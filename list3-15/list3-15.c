//�ǂݍ���2�̐����l�̍������߂ĕ\��

#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("2�̐�������͂���B");
	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);

	printf("�����̍���%d�ł��B\n", n1 > n2 ? n1 - n2 : n2 - n1);

	return 0;
}