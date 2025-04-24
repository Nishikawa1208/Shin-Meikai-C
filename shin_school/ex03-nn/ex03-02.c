#include <stdio.h>

int main(void)
{
    double x, a;

    printf("正多角形の角数を入力してください："); scanf("%lf", &x);

    a = ((180 * x) - 360) / x;

    printf("内角の大きさは%lf度です。", a);

    return 0;
}