//�ǂݍ���2�̐����l�̑傫���ق��̒l��\��
#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("2�̐�������͂���B");
	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);

	if (n1 > n2)
		printf("�傫�����̒l��%d�ł��B\n", n1);
	else
		printf("�傫�����̒l��%d�ł��B\n", n2);

	return 0;
}