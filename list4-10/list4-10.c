//�ǂݍ��񂾐��̐����l���t���ɕ\��

#include<stdio.h>

int main(void)
{
	//���͂����l���������̔��菈��
	int no;

	do {
		printf("���̐�������͂���F");
		scanf("%d", &no);
		if (no <= 0)
			puts("���ł͂Ȃ�������͂��Ȃ��ŁB");
	} while (no <= 0);

	//no��0���傫���Ȃ��Ă���
	printf("���̐����t����ǂނ�");
	while (no > 0) {
		printf("%d", no % 10); //�ŉ��ʂ̌��̒l��\��
		no /= 10;
	}
	puts("�ł��B");

	return 0;
}