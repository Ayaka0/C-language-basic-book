//2�̐�����������������A�召�̔���

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2�̐��������");

	printf("����A�F"); scanf("%d", &a);
	printf("����B�F"); scanf("%d", &b);

	

	if (a == b) {
		printf("2�̒l�͓����ł��B\n");
	}
	else if (a > b) {
		printf("����������%d�ł�\n", b);
		printf("�傫������%d�ł�\n", a);
	}
	else {
		printf("����������%d�ł�\n", a);
		printf("�傫������%d�ł�\n", b);
	}


	return 0;
}