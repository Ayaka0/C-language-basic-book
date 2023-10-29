//学生の身長を読み込んでソート

#include<stdio.h>

#define NUMBER 5

//バブルソート
void bsort(int a[], int n)
{
	int i, j, tmp;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	
}
int main(void)
{
	int height[NUMBER]; //NUMBER人の学生の身長

	printf("%d人の身長を入力\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番：", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("昇順にソートしました。");
	for (i = 0; i < NUMBER; i++)
		printf("% 2d番：%d\n", i + 1, height[i]);

	return 0;
}