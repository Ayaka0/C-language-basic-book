//2�̐����l�̑召��r����

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2�̐����l�����");
	printf("����A�F"); scanf("%d", &a);
	printf("����B�F"); scanf("%d", &b);

	if (a == b)
		printf("A��B�͓������B");
	else if (a > b)
		printf("A��B���傫���B");
	else
		printf("A��B��菬�����B");


	return 0;
}