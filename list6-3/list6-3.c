//2�̐�����2��l�̍������߂�

#include<stdio.h>

//n��2��l��Ԃ�
int sqr(int n)
{
	return n * n;
}

//a��b�̍���Ԃ�
int diff(int a, int b)
{
	return a > b ? a - b : b - a;
}


int main(void)
{
	int x, y;

	puts("2�̐�������͂���");
	printf("����x : "); scanf("%d", &x);
	printf("����y : "); scanf("%d", &y);

	printf("x��2���y��2��̍���%d�B\n", diff(sqr(x), sqr(y)));

	return 0;
}