//逐次探索（番兵法）

#include<stdio.h>

#define NUMBER 5
#define FAILED -1

//要素数nの配列vからkeyと一致する要素を探索
int search(int v[], int key, int n)
{
	int i;

	for (i = 0; v[i] != key; i++);
	return i < n ? i : FAILED;
}

int main(void)
{
	int ky, idx;
	int x[NUMBER + 1];

	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}

	printf("探す値：");
	scanf("%d", &ky);

	if ((idx = search(x, ky, NUMBER)) == FAILED)
		puts("探索に失敗。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);

	return 0;
}