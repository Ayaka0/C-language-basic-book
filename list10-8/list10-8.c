//2�̐����������ɕ��ׂ�

#include<stdio.h>

//x��y�������I�u�W�F�N�g�̒l������
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//*n1<=n2�ƂȂ�悤�Ƀ\�[�g
void sort2(int* n1, int* n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int a, b;
	puts("2�̐��������");
	printf("����A�F"); scanf("%d", &a);
	printf("����B�F"); scanf("%d", &b);

	sort2(&a, &b);

	puts("�����̒l����������");
	printf("����A��%d�ł�\n", a);
	printf("����B��%d�ł�\n", b);

	return 0;
}