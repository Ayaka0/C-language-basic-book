//�w�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\��

#include<stdio.h>

int main(void)
{
	int num;

	printf("�����͉��F");
	scanf("%d", &num);

	int i = 0;
	int sum = 0; //���v�l
	while (i < num) {
		int tmp;
		printf("No.%d:", ++i); //i�̒l���C���N�������g������ɕ\��
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl:%.2f\n", (double)sum / num);

	return 0;
}