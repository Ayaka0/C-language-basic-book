//���͂��������l�̕���������\��

#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐����l�F");
	scanf("%d", &no);

	
	if (no > 0) {
		int i = 0;
		while (i < no)
			putchar('*', i++);
	}
	

	return 0;
}