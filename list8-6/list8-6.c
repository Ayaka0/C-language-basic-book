//�I�΂ꂽ�����̖�����\��

#include<stdio.h>

enum anima{Dog, Cat, Monkey, Invalid};

//dog
void dog(void)
{
	puts("�����I");
}

//cat
void cat(void)
{
	puts("�ɂ�[��");
}

//monkey
void monkey(void)
{
	puts("������");
}

//selecting animal
enum animal select(void)
{
	int tmp;

	do {
		printf("0�c���@1�c�L�@2�c�T���@3�c�I���F");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	enum animal selected;

	do {
		switch (selected = select()) {
		case Dog: dog(); break;
		case Cat: cat(); break;
		case Monkey: monkey(); break;
		}
	} while (selected != Invalid);
	return 0;
}