//���`�T��

#include<stdio.h>

#define NUMBER 5
#define FAILED -1

//�v�f��n�̔z��v����key�ƈ�v����v�f��T��
int search(const int v[], int key, int n)
{
	int i = 0;

	while (1) {
		if (i == n)
			return FAILED;	//�T�����s
		if (v[i] == key)
			return i;	//�T������
		i++;
	}
}

int main(void)
{
	int ky, idx;
	int x[NUMBER];

	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	printf("�T���l�F");
	scanf("%d", &ky);

	idx = search(x, ky, NUMBER); //�v�f��NUMBER�̔z��x����y��T��

	if (idx == FAILED)
		puts("�T���Ɏ��s���܂����B");
	else
		printf("%d��%d�Ԗڂɂ���܂��B\n", ky, idx + 1);


	return 0;
}