//学生の点数を読み込んで分布を表示

#include<stdio.h>

#define NUMBER 120

int main(void)
{
	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };

	printf("人数を入力");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1～%dで入力：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力\n", num);

	int i;
	for (i = 0; i < num; i++) {
		printf("%2d番：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("0～100で入力：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("---分布グラフ---");
	printf("          100");

	int j;
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {
		printf("%3d～%3d：", i * 10, i * 10 + 9);
		for(j = 0; j < bunpu[i]; j++)
		putchar('*');
		putchar('\n');
	}

	return 0;
}