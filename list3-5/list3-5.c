//�ǂݍ��񂾐����l���[�����ǂ���
#include<stdio.h>

int main(void)
{
	int num;

	printf("��������͂���F");
	scanf("%d", &num);

	if (num)
		puts("���̐��̓[���ł͂Ȃ��B");
	else
		puts("���̐��̓[���B");

	return 0;
}