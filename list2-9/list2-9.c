//2�̐����l��ǂݍ���ŕ��ϒl�������ŕ\��
#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2�̐�������͂���B");
	printf("����a:"); scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);

	printf("�����̕��ς�%f�ł��B\n", (a + b) / 2.0);

	return 0;
}