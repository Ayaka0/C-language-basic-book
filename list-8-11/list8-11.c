//�W�����͂���ǂݍ��܂ꂽ�����������J�E���g����

#include<stdio.h>

int main(void)
{
	int ch;
	int cnt[10] = { 0 }; //���������̉�

	while ((ch = getchar()) != EOF)
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;

	puts("���������̉�");
	int i;
	for (i = 0; i < 10; i++)
		printf("'%d' : %d\n", i, cnt[1]);

	return 0;
}