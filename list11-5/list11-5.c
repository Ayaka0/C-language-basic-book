//文字列の長さを調べる

#include<stdio.h>

//文字列sの長さを返す
int str_length(const char* s)
{
	int len = 0;

	while (*s++)
		len++;
	return len;
}

int main(void)
{
	char str[128]; //なる文字を含めて128文字まで格納できる

	printf("文字列を入力せよ：");
	scanf("%s", str);

	printf("文字列\"%s\"の長さは%dです。\n", str, str_length(str));

	return 0;
}