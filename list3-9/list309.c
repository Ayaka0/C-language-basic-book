//�ǂݍ��񂾐����l�̕����𔻒�
#include<stdio.h>

int main(void)
{
	int no;

	printf("��������͂���B");
	scanf("%d", &no);

	if (no == 0)
		puts("���̐��͂O�ł��B");
	else if (no > 0)
		puts("���̐��͐��ł��B");
	else
		puts("���̐��͕��ł��B");

	return 0;
}
