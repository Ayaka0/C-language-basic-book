//�z��̗v�f�̏�����

#include<stdio.h>

int main(void)
{
	int a[4] = {
		1868,
		1912,
		1926,
		1989,
	};

	int b[] = { 1,2,3 }; //�v�f���͇B�ƂȂ�

	int c[5] = { 1,2 }; // int c[5] = {1,2,0,0,0};�Ɠ���

	int d[5] = { 0 }; //�S�v�f��0�ŏ�����

	int i;
	for (i = 0; i < 4; i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");

	for (i = 0; i < 3; i++)
		printf("a[%d] = %d\n", i, b[i]);
	printf("\n");

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, c[i]);
	printf("\n");

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, d[i]);
	printf("\n");

	return 0;
}