//�|�C���^�ɂ���Ēl�̕ύX�˗�

#include<stdio.h>

//p�������ϐ���999����
void set999(int* p)
{
	*p = 999;
}

int main(void)
{
	int x = 123;
	int  y = 456;
	int sw;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("�ύX����̂�[ 0 �cx / 1�cy] = ");
	scanf("%d", &sw);

	int* p;
	if (sw == 0)
		set999(&x);	//x�̕ύX�˗�
	else
		set999(&y); //p��y���w��

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}