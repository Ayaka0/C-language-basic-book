//�ǂݍ��񂾐����l�͊��������

#include<stdio.h>

int main(void)
{
	int retry; //�����𑱂��邩

	do {
		int no;
		printf("��������͂���B");
		scanf("%d", &no);

		if (no % 2)
			puts("���̐��͊�B");
		else
			puts("���̐��͋����B");

		printf("������x�H�yyes �c0 / No�c1�z�F");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}