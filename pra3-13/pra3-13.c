//���т̕s�𔻒�

#include<stdio.h>

int main(void)
{
	int score;

	printf("�_���F"); scanf("%d", &score);

	if (score < 0 || score > 100)
		printf("�s���ȓ_��\n");
	else if(score <= 59)
		printf("�s��\n");
	else if(score <= 69)
		printf("��\n");
	else if(score <= 79)
		printf("��n");
	else 
		printf("�D\n");




	return 0;
}