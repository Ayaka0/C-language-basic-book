//�ǂݍ���2�̐����l�̑傫�����̒l��\��

#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("�Q�̐�������͂���B");
	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);

	int max = n1 > n2 ? n1 : n2; //�傫�����̒l��max��������

	printf("�傫�����̒l��%d�ł��B\n", max);


	return 0;
}