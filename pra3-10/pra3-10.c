//3�̒l�̍ŏ��l�����߂�

#include<stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("3�̐��������");

	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);
	printf("�����R�F"); scanf("%d", &n3);
	
	printf("�ŏ��l��%d�ł��B\n", (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3));

	return 0;
}