//英語の点数と数学の点数の最高点を求める

#include<stdio.h>

#define NUMBER 5

//要素数nの配列vの最大値を返す
int max_of(int v[], int n)
{
	int max = v[0];

	int i;
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int eng[NUMBER];
	int mat[NUMBER];

	printf("%d任の点数を入力\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 英語：", i + 1); scanf("%d", &eng[i]);
		printf("     数学："); scanf("%d", &mat[i]);
	}
	int max_e = max_of(eng, NUMBER);
	int max_m = max_of(mat, NUMBER);

	printf("英語の最高点=%d\n", max_e);
	printf("数学の最高点=%d\n", max_m);

	return 0;
}