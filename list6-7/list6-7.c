//�������p�̒��p�񓙕ӎO�p�`��\��

#include<stdio.h>

//�L������*��n�A���\��
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int len;

	printf("�������p�񓙕ӎO�p�`�����B\n");
	printf("�Z�� : ");
	scanf("%d", &len);

	int i;
	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}