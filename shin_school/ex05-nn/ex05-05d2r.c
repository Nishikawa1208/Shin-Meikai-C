#include <stdio.h>
#include "pi.h"

int main(void)
{
    double x, y;

    printf("角度(degree)を入力してください。"); scanf("%lf", &x);

    y = (x * PI) / 180;

    printf("%lf°は%lfラジアンです。", x, y);

    return 0;
}