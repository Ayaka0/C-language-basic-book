//3�̐����l�̍ŏ������߂�
#include<stdio.h>

int main(void)
{
	int a, b, c;

	puts("3�̐��������");

	printf("����1�F"); scanf("%d", &a);
	printf("����2�F"); scanf("%d", &b);
	printf("����3�F"); scanf("%d", &c);

	int min;
	min = a;
	if (min > b && b < c) {
		printf("�ŏ��l��%d�ł��B\n", b);
	}
	else if (min > c && c < b) {
		printf("�ŏ��l��%d�ł��B\n", c);
	}
	else
		printf("�ŏ��l��%d�ł��B\n", a);


	return 0;
}