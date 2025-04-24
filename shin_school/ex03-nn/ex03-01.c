#include <stdio.h>

int main(void)
{
    int y, y1;
    double x, z, y2;

    printf("負の実数値を入力してください："); scanf("%lf", &x);

    y1 = x - 0.5;
    z = x * 10;
    y = z - 0.5;
    y2 = y / 10.0;

    printf("%lfの小数点以下第一位を四捨五入した値は%d、小数点以下第二位を四捨五入した値は%lfです。", x, y1, y2);

    return 0;
}