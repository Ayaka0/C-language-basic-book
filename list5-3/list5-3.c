//�z��̊e�v�f�ɐ擪���珇��1�`5�������ĕ\��

#include<stdio.h>

int main(void)
{
	int a[5];

	int i;
	for (i = 0; i < 5; i++) //�v�f�ɒl����
		a[i] = i + 1;

	for (i = 0; i < 5; i++) //�v�f�̒l����
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}