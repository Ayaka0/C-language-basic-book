//�z��̑S�v�f�̕��т𔽓]����

#include<stdio.h>

int main(void)
{
	int x[7]; //int[7]�^�̔z��
	int i;

	for (i = 0; i < 7; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {
		int t = x[i];
		x[i] = x[6 - i];
		x[6 - i] = t;
	}

	puts("���]�����B");
	for (i = 0; i < 7; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}