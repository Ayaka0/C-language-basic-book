//���͂��������l���t���ɂ���

#include<stdio.h>

int main(void)
{
	int no;
	
	do {
		printf("���̐�������́F");
		scanf("%d", &no);
		if (no <= 0)
			puts("���ł͂Ȃ�������͂��Ȃ�");
	} while (no <= 0);

	//no��0���傫���ꍇ
	printf("�t����ǂނ�");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("�ł��B");

	return 0;
}