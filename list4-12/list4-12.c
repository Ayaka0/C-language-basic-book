//�ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v�ifor���j

#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐�������� : ");
	scanf("%d", &no);

	int i; //index�̐錾
	for (i = 0; i <= no; i++) //���͂���no�̒l�ȏ�ɂȂ�܂ŌJ��Ԃ�
		printf("%d ", i);
	putchar('\n');

	return 0;
}