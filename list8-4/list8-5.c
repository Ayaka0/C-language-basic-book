//�w���̐g����ǂݍ���Ń\�[�g

#include<stdio.h>

#define NUMBER 5

//�o�u���\�[�g
void bsort(int a[], int n)
{
	int i, j, tmp;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	
}
int main(void)
{
	int height[NUMBER]; //NUMBER�l�̊w���̐g��

	printf("%d�l�̐g�������\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("�����Ƀ\�[�g���܂����B");
	for (i = 0; i < NUMBER; i++)
		printf("% 2d�ԁF%d\n", i + 1, height[i]);

	return 0;
}