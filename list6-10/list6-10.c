//�ō��_�����߂�

#include<stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);

int main(void)
{
	extern int tensu[];

	printf("%d�l�̓_�������\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("%d : ", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("�ō��_��%d\n", top());

	return 0;
}

//�z��tensu�̍ő�l��Ԃ��֐�
int top(void)
{
	extern int tensu[];
	int max = tensu[0];

	int i;
	for (i = 0; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}