//�w���̓_����ǂݍ���ŕ��z��\��

#include<stdio.h>

#define NUMBER 120

int main(void)
{
	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };

	printf("�l�������");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1�`%d�œ��́F", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d�l�̓_�������\n", num);

	int i;
	for (i = 0; i < num; i++) {
		printf("%2d�ԁF", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("0�`100�œ��́F");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("---���z�O���t---");
	printf("          100");

	int j;
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {
		printf("%3d�`%3d�F", i * 10, i * 10 + 9);
		for(j = 0; j < bunpu[i]; j++)
		putchar('*');
		putchar('\n');
	}

	return 0;
}