//�����T���i�ԕ��@�j

#include<stdio.h>

#define NUMBER 5
#define FAILED -1

//�v�f��n�̔z��v����key�ƈ�v����v�f��T��
int search(int v[], int key, int n)
{
	int i = 0;
	v[n] = key; //�ԕ��@���i�[

	while (1) {
		if (v[i] == key)
			break; //�T������
		i++;
	}
	return i < n ? i : FAILED;
}

int main(void)
{
	int ky, idx;
	int x[NUMBER + 1];

	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}

	printf("�T���l�F");
	scanf("%d", &ky);

	if ((idx = search(x, ky, NUMBER)) == FAILED)
		puts("�T���Ɏ��s�B");
	else
		printf("%d��%d�Ԗڂɂ���܂��B\n", ky, idx + 1);

	return 0;
}