//�ǂݍ��񂾐����l�𔻒�

#include<stdio.h>

int main(void)
{
	int retry;

	do {
		int no;

		printf("��������́F"); scanf("%d", &no);
		printf("���̐���%d�ł��B\n", no);

		printf("������x�H�yYes�c0 / No�c9�z\n");
		scanf("%d", &retry);
	} while (retry == 0);
	return 0;
}