//��Βl�̔���

#include<stdio.h>

int main(void)
{
	int no;
	int result;

	puts("���������");
	scanf("%d", &no);

	if (no < 0) {
		result = no * -1;
		printf("��Βl��%d�ł��B", result);
	} else {
	printf("��Βl��%d�ł��B", no);
	}

	return 0;
}