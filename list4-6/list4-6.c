//�ǂݍ��񂾐����l��0�܂ŃJ�E���g�_�E��

#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���F");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d ", no--); //no�̒l��\��������Ƀf�N�������g
	printf("\n"); //���s

	return 0;
}