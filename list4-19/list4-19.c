//�����`�̕`��

#include<stdio.h>

int main(void)
{
	int height, width;

	puts("�����`��\��");
	printf("�����F"); scanf("%d", &height);
	printf("�����F"); scanf("%d", &width);

	int i, j;
	for (i = 1; i <= height; i++) { //�����`��height�s
		for (j = 1; j <= width; j++) //�e�s��width��'*'��\��
			putchar('*');
		putchar('\n');
	}

	return 0;
}