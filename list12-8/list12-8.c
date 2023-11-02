//2点間の距離を求める

#include<stdio.h>
#include<math.h>

#define sqr(n) ((n) * (n)) //2乗値を求める

//点の座標を表す構造体
typedef struct {
	double x;
	double y;
}Point;

//点p1と点p2の距離を返す
double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

int main(void)
{
	Point crnt, dest;

	printf("現在地のX座標："); scanf("%lf", &crnt.x);
	printf("現在地のY座標："); scanf("%lf", &crnt.y);
	printf("現在地のX座標："); scanf("%lf", &dest.x);
	printf("現在地のY座標："); scanf("%lf", &dest.y);

	printf("目的地までの距離は%.2fです。\n", distance_of(crnt, dest));

	return 0;
}