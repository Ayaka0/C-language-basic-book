//�E�������p�̒��p�񓙕ӎO�p�`��\��

#include<stdio.h>

int main(void)
{
	int len;

	puts("�E�����p�񓙕ӎO�p�`��\��");
	printf("�Z�ӁF");
	scanf("%d", &len);

	int i, j;

	for (i = 1; i <= len; i++) { //i�s�ii = 1,2,....,len�j
		for (j = 1; j <= len - i; j++) //�e�s��len - ��' '��\��
			putchar(' ');
		for (j = 1; j <= i; j++) //�e�s��i��'*'��\��
			putchar('*');
		putchar('\n'); //���s
	}

	return 0;
}