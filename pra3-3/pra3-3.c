//�����l�̕�������

#include<stdio.h>

int main(void)
{
	int no;

	puts("�����l�����");
	scanf("%d", &no);

	if (no == 0)
		printf("���̐��͂O�ł��B\n");
	else if (no > 0)
		printf("���̐��͐��ł��B\n");
	else
		printf("���̐��͕��ł��B\n");

	return 0;
}