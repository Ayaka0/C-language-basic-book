//�W�����͋�̓��͂�W���ɃR�s�[����

#include<stdio.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF) //�ǂݍ��񂾕�����ch�ɑ�����AEOF�Ɠ������Ȃ����ch��\��
		putchar(ch);

	return 0;
}
