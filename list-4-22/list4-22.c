//�ǂݍ��񂾐����̌���������A���\��

#include<stdio.h>

int main(void)
{
	int retry;

	do {
		int no;
		do {
			printf("���̐��������");
			scanf("%d", &no);
			if (no <= 0)
				puts("���łȂ�������͂��Ȃ��ŁB");
		} while (no <= 0);
			//no��0�ȏ�̏ꍇ
		int i;
		for (i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("������x�yyes�c0 / No�c9�z�F");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}