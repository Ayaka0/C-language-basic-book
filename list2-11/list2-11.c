//3�̐����l��ǂݍ���ō��v�l�ƕ��ϒl��\��
#include<stdio.h>

int main(void)
{
	int a, b, c;

	puts("3�̐�������͂���B");
	printf("����a:"); scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);
	printf("����c:"); scanf("%d", &c);

	int sum = a + b + c; //���v�l
	double ave = (double)sum / 3; //���ϒl�i�L���X�g���ŋ��߂�j

	printf("�����̍��v��%5d�ł��B\n", sum);
	printf("�����̕��ς�%5.1f�ł��B\n", ave);

	return 0;
}