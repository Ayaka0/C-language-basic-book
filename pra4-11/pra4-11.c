//������͂������l�̕������c�ɕ\��

#include<stdio.h>

int main(void)
{
	int no;

	printf("��������́F");
	scanf("%d", &no);

	if (no > 0) {
		int i = 1;
		while (i <= no) {
			putchar('*');
			putchar('\n');
			i++;
		}
	}


	return 0;
}