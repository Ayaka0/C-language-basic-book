//�ǂݍ��񂾐����l�̍ŉ��ʌ��͂T���ǂ���
#include<stdio.h>

int main(void)
{
	int num;

	printf("��������͂���F");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("�ŉ��ʂ̌��͂T�ł��B");
	else
		puts("�ŉ��ʂ̌��͂T�ł͂Ȃ��B");

	return 0;
}