//�ǂݍ��񂾐����l�ɉ����Ă���񂯂�̎��\��

#include<stdio.h>

int main(void) {

	int hand;

	do {

		printf("���I��Ły0�c�O�[/1�c�`���L/2�c�p�[�z");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);

	printf("���Ȃ���");
	switch (hand) {
	case 0: printf("�O�["); break;
	case 1: printf("�`���L"); break;
	case 2: printf("�p�["); break;
	}
	printf("��I�т܂����B\n");

	return 0;
}