//������̒����𒲂ׂ�

#include<stdio.h>

//������str�̒�����Ԃ�
int str_length(const char s[])
{

	int len = 0;

	while (s[len])
		len++;
	return len;
}

int main(void)
{
	char str[128];

	printf("���������͂���");
	scanf("%s", str);

	printf("������\"%s\"�̒�����%d�ł��B\n", str, str_length(str));

	return 0;
}