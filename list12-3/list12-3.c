//�w����\���\����

#include<stdio.h>

#define NAME_LEN 64 //���O�̕�����

//�w����\���\����
struct student {
	char name[NAME_LEN];
	int height;
	double weight;
};

int main(void)
{
	struct student takao = { "tanaka", 173 };

	printf("������%s\n", takao.name);
	printf("�g����%d\n", takao.height);
	printf("�̏d��%.1f\n", takao.weight);


	return 0;
}