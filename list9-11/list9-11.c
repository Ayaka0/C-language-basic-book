//��������̉p����啶���A�������ɕϊ�

#include<stdio.h>
#include<ctype.h>

//��������̉p����啶���ɕϊ�
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = toupper(s[i]);
		i++;
	}
}

//��������̉p�����������ɕϊ�
void str_tolower(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = tolower(s[i]);
		i++;
	}
}

int main(void)
{
	char str[128];

	printf("����������");
	scanf("%s", str);

	str_toupper(str);
	printf("�啶���F%s\n", str);

	str_tolower(str);
	printf("�������F%s\n", str);




	return 0;
}