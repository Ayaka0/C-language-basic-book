//������𑖍����ĕ\��

#include<stdio.h>

void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

int main(void)
{
	char str[128];

	printf("���������͂���");
	scanf("%s", str);

	printf("���Ȃ���");
	put_string(str);
	printf("�Ɠ��͂���\n");
	return 0;
}