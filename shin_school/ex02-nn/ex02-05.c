#include <stdio.h>

int main(void)
{
    double x, s;

    printf("正三角形の一辺の長さを入力してください："); scanf("%lf", &x);

    s = x * ((x / 2) * 1.7320508) / 2;

    printf("面積は%lfです。", s);

    return 0;
}