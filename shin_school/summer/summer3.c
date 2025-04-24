#include <stdio.h>
int main(void)
{
    double x1, y1, x2, y2, x3, y3, s;

    printf("点P1の座標を入力してください(x1,y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("点P2の座標を入力してください(x2,y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("点P3の座標を入力してください(x3,y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    s = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    
    if (s == 0) {
        printf("3点P1P2P3は一直線上にあります。");
    }else{
        printf("3点P1P2P3は一直線上にありません。");
    }

    return 0;
}