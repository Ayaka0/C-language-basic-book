//�w�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\��

#include<stdio.h>

int main(void)
{
	int num;

	printf("�����͉��F");
	scanf("%d", &num);

	int sum = 0; //���v�l
	int i; //�J�E���g�錾

	//���͂��������̌��ȏ�ɂȂ�܂ŉ��Z�ŌJ��Ԃ�
	for (i = 1; i <= num; i++) {
		int tmp;
		printf("No.%d:", i);
		scanf("%d", &tmp); //num�œ��͂������񐔕��A�l����͂���
		sum += tmp; //���͂����l�𖈉񍇌v���Z
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl�F%.2f\n", (double)sum / num);


	return 0;
}