//�ǂݍ��񂾐��̐����l�̌�����\��

#include<stdio.h>

int main(void)
{
	int no; 
	do {
		printf("���̐�������͂���h");
		scanf("%d", &no);
		if (no <= 0)
			puts("���ł͂Ȃ�������͂��Ȃ�");
	} while (no <= 0);

	//no��0���傫���Ȃ��Ă���

	//���͂����l���t����ǂݍ��񂾕\��
	int tmp = no;
	printf("%d���t����ǂނ�", tmp);
	while (tmp > 0) {
		printf("%d", tmp % 10);
		tmp /= 10;
	}
	puts("�ł��B");


	//���͂��������̕\��
	int temp = no; //��œ��͂����ϐ�no��int�^temp�Ɋi�[
	int digits = 0; //����

	while (temp > 0) {
		temp /= 10; //�E��1�����炷
		digits++;
	}
	printf("%d��%d���ł��B", no, digits);


	return 0;
}