//���l�̃J�E���g�A�b�v

#include<stdio.h>

int main(void)
{
	int no;

	printf("��������́F");
	scanf("%d", &no);

	printf("{ ");
	int i = 1;
	while (i < no) 
		printf("%d, ", i++);
	printf("%d}\n", no);
	

	return 0;
}