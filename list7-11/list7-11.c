//2�_�Ԃ̋��������߂�

#include<stdio.h>
#include<math.h>

//�_(x1,y1)�Ɠ_(x2,y2)�̋��������߂�
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
	double x1, y1;
	double x2, y2;

	printf("2�_�Ԃ̋��������߂�\n");
	printf("�_�P�cX���W�F"); scanf("%lf", &x1);
	printf("�@�@�cY���W�F"); scanf("%lf", &y1);
	printf("�_�Q�cX���W�F"); scanf("%lf", &x2);
	printf("	�cY���W�F"); scanf("%lf", &y2);

	printf("������%f�ł��B\n", dist(x1, y1, x2, y2));

	return 0;
}