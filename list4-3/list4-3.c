//�����l�����X�Ɠǂݍ���ō��P�`�ƕ��ς�\��

#include<stdio.h>

int main(void)
{
	int sum = 0; //���v
	int cnt = 0; //�����l�̌�
	int retry;  //�������p�����邩

	do {

		int t;

		printf("�����l����͂���F");
		scanf("%d", &t);

		sum = sum + t; //sum��t���������l��sum�ɑ���isum��t��������j
		cnt = cnt + 1; //cnt��1���������l��cnt�ɑ���icnt��1��������j

		printf("�܂��H��yes�c0 / No�c9���F");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);

	return 0;
}