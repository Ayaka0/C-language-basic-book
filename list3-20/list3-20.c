//�ǂݍ��񂾐����l���R�Ŋ�������]��\��

#include<stdio.h>

int main(void)
{
	int no;

	printf("�����l�F");
	scanf("%d", &no);

	switch (no % 3) {
		case 0: puts("�R�Ŋ���؂��B"); break;
		case 1: puts("�R�Ŋ���؂�����]�͂P�B"); break;
		case 2: puts("�R�łŊ���؂�����]�͂Q�B"); break;
	}

	return 0;
}