#include <stdio.h>

int main(void)
{
    double x, y, r;

    printf("中心の座標(x,y)と半径rを入力してください: ");
    scanf("%lf %lf %lf", &x, &y, &r);

    printf("%s\n", ((x * x + y * y) <= (r * r)) ? "IN" : "OUT");

    return 0;
}
