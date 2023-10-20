//読み込んだ整数値を３で割った剰余を表示

#include<stdio.h>

int main(void)
{
	int no;

	printf("整数値：");
	scanf("%d", &no);

	switch (no % 3) {
		case 0: puts("３で割り切れる。"); break;
		case 1: puts("３で割り切った剰余は１。"); break;
		case 2: puts("３でで割り切った剰余は２。"); break;
	}

	return 0;
}