//選ばれた動物の鳴き声を表示

#include<stdio.h>

enum anima{Dog, Cat, Monkey, Invalid};

//dog
void dog(void)
{
	puts("わんわん！");
}

//cat
void cat(void)
{
	puts("にゃーお");
}

//monkey
void monkey(void)
{
	puts("きっき");
}

//selecting animal
enum animal select(void)
{
	int tmp;

	do {
		printf("0…犬　1…猫　2…サル　3…終了：");
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