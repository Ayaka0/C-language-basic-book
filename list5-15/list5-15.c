//4�l�̊w����3�Ȗڂ̃e�X�g2�񕪂̍��v�����߂ĕ\��

#include<stdio.h>

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int sum[4][3];

	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			sum[i][j] = tensu1[i][j] + tensu2[i][j];
	}


	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu1[i][j]);
		putchar('\n');
	}

	puts("2��ڂ̓_��");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu2[i][j]);
		putchar('\n');
	}

	puts("���v�_");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}


	return 0;
}
