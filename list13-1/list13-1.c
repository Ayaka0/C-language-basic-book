//10�̔{��������

#include<stdio.h>

int main(void)
{
	int no;

	printf("��������� :");
	scanf("%d", &no);

	if (no % 10) //10�Ŋ���؂�Ȃ�
		printf("�P�O�̔{���ł͂Ȃ��B");
	else
		printf("�P�O�̔{���ł��B");

	return 0;
}