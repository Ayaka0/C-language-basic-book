//�ǂݍ��񂾐����̌���������A���\��

#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐����F");
	scanf("%d", &no);

	int i;
	for (i = 1; i <= no; i++)
		putchar('*');
	putchar('\n');

	return 0;
}