#include <stdio.h>

int main(void)
{
    double x, y;

    printf("時速をキロメートルで入力してください："); scanf("%lf", &x);

    y = (x * 1000) / 3600;

    printf("秒速にすると%.1lfメートルです。", y);

    return 0;
}