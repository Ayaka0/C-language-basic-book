//2�̐����l��10�ȏ�ȉ��̔���

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2�̐��������");

	printf("����A : "); scanf("%d", &a);
	printf("����B : "); scanf("%d", &b);

	int result = a - b;

	if (result > 10 || result < -10) {
	printf("�����̍���11�ȏ�ł��B\n");
	}else{
		printf("�����̍���10�ȉ��ł��B\n");
}

	return 0;
}