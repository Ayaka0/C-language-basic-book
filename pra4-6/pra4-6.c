//���͂��������l�������l�̂ݕ\��

#include<stdio.h>

int main(void)
{
	int no;
	printf("���̐����l����́F");
	scanf("%d", &no);

	
	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d ",i);
			i += 2;
		}
	}



	return 0;
}