//読み込んだ整数値に応じてじゃんけんの手を表示

#include<stdio.h>

int main(void) {

	int hand;

	do {

		printf("手を選んで【0…グー/1…チョキ/2…パー】");
		scanf("%d", &hand);
	} while (hand < 0 || hand > 2);

	printf("あなたは");
	switch (hand) {
	case 0: printf("グー"); break;
	case 1: printf("チョキ"); break;
	case 2: printf("パー"); break;
	}
	printf("を選びました。\n");

	return 0;
}