//3�̐����l����

#include<stdio.h>

int main(void)
{
	int a, b, c;

	puts("3�̐��������");
	printf("����A : "); scanf("%d", &a);
	printf("����B : "); scanf("%d", &b);
	printf("����C : "); scanf("%d", &c);

	if (a == b == c)
		printf("3�̒l�͓������B\n");
	else if (a == b || b == c || a == c)
		printf("2�̒l�͓�����\n");
	else
		printf("3�̒l�͈قȂ�B");



	return 0;
}