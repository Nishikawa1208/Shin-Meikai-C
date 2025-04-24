#include <stdio.h>
#include "pi.h"

int main(void)
{
    double x, y;

    printf("角度(radian)を入力してください。"); scanf("%lf", &x);

    y = (x * 180) / PI;

    printf("%lfラジアンは%lf°です。", x, y);

    return 0;
}