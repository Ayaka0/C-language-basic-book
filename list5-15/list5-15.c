//4人の学生の3科目のテスト2回分の合計を求めて表示

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

	puts("2回目の点数");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu2[i][j]);
		putchar('\n');
	}

	puts("合計点");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}


	return 0;
}
