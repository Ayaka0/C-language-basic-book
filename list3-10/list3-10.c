//�ǂݍ��񂾐����l�����ł���΋����A��̕ʂ𔻒肵�ĕ\��
#include<stdio.h>

int main(void)
{
	int no;

	printf("��������͂���B");
	scanf("%d", &no);

	if (no > 0)
		if (no % 2 == 0)
			puts("���̐��͋����ł��B");
		else
			puts("���̐��͊�ł��B");
	else
		puts("���łȂ��l�����͂��ꂽ�B");

	return 0;
}