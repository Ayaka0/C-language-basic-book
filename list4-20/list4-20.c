//���������p�̒��p�ɓ��ӎO�p�`��\��

#include<stdio.h>

int main(void)
{
	int len;

	puts("�������p�񓙕ӎO�p�`��\��");
	printf("�Z�ӁF");
	scanf("%d", &len);

	int i, j;
	for (i = 1; i <= len; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}