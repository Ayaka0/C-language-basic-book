//�ǂݍ��񂾐����̌�����1234567890���J��Ԃ��\��

#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���G");
	scanf("%d", &no);

	int i;
	for (i = 1; i <= no; i++)
		printf("%d", i % 10); //i��10�Ŋ������]���\��
	putchar('\n');

	/*int q = no / 10; //1234567890�̌�
	int r = no % 10; //�c��̌�

	int i;
	for(i = 1; i <= q; i++)
	printf("1234567890");

	for(i = 1; i <= r; i++)
	printf("%d", i % 10);
	putchar("\n");
	
	
	*/


	return 0;
}