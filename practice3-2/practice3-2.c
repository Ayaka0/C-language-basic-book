//�񐔔���

#include<stdio.h>

int main(void)
{
	int no1, no2;

	puts("2�̐��������");
	printf("�����P�F"); scanf("%d", &no1);
	printf("�����Q�F"); scanf("%d", &no2); 

	if (no1 % no2 == 0)
		printf("No2��No1�̖񐔂ł��B\n");
	else
		printf("No2��No1�̖񐔂ł͂���܂���B\n");
}