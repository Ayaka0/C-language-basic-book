//�z��̑S�v�f��0.0�������ĕ\��

#include<stdio.h>

int main(void)
{
	double x[7]; //double[7]�^�̔z��

	int i;
	for (i = 0; i < 7; i++)
		x[i] = 0.0; //�v�f�ɒl��\��

	for (i = 0; i < 7; i++)
		printf("x[%d] = %.1f\n", i, x[i]);


	return 0;
}
