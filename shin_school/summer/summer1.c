#include <stdio.h>
int main(void)
{
    double x1, y1, x2, y2, x3, y3, p1p2, p2p3, p3p1;

    printf("点P1の座標を入力してください(x1,y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("点P2の座標を入力してください(x2,y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("点P3の座標を入力してください(x3,y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    p1p2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    p2p3 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    p3p1 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);

    if ((p1p2 + p2p3 == p3p1) || (p2p3 + p3p1 == p1p2) || (p3p1 + p1p2 == p2p3)) {
        printf("三角形P1P2P3は直角三角形です。\n");
    } else {
        printf("三角形P1P2P3は直角三角形ではありません。\n");
    }

    return 0;
}
