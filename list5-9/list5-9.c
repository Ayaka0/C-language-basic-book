//5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��

#include<stdio.h>

int main(void)
{
	int tensu[5];
	int sum = 0;

	printf("5�l�̓_�������\n");
	int i;
	for (i = 0; i < 5; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / 5);

	return 0;
}