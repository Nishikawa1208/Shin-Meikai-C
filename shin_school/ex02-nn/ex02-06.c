#include <stdio.h>

int main(void)
{
    double r, s;

    printf("円の半径を入力してください："); scanf("%lf", &r);

    s = 2 * r * r;

    printf("面積は%lfです。", s);

    return 0;
}