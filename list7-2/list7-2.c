//単なるchar型が符号つき型か符号無し型かを判定

#include<stdio.h>
#include<limits.h>

int main(void)
{
	printf("この処理系のchar型は%sです\n", CHAR_MIN ? "符号付き型" : "符号なし型");

	return 0;
}