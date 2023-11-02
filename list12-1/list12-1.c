//5人の学生の身長と名前を身長の昇順にソート

#include<stdio.h>
#include<string.h>

#define NUMBER 5 //学生の人数
#define NAME_LEN 64 //名前の文字数

//ＸとＹがさす整数値を交換
void swap_int(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//sxとsyが指す文字列を交換
void swap_str(char* sx, char* sy)
{
	char temp[NAME_LEN];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);
}

//配列numと配列strの先頭n個の要素をnumに基づいて昇順にソート
void sort(int num[], char str[][NAME_LEN], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (num[j - 1] > num[j]) {
				swap_int(&num[j - 1], &num[j]);
				swap_str(str[j - 1], &str[j]);
			}
		}
	}
}

int main(void)
{
	int height[] = { 178, 175, 173, 165, 179 };
	char name[][NAME_LEN] = { "sato", "sanaka", "takao", "mike", "masaki" };

	int i;
	for (i = 0; i < NUMBER; i++)
		printf("%2d : %-8s%4d\n", i + 1, name[i], height[i]);

	sort(height, name, NUMBER);

	puts("身長順にソート");
	for (i = 0; i < NUMBER; i++)
		printf("%2d : %-8s%4d\n", i + 1, name[i], height[i]);


	return 0;
}