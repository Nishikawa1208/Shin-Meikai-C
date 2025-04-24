#include <stdio.h>

int main(void)
{
    int y;
    double x, z;

    printf("正の実数値を入力してください："); scanf("%lf", &x);

    z = x * 10;
    y = z + 0.5;
    z = y / 10.0;

    printf("%lfの小数第二位を四捨五入すると%.2lfです。", x, z);

    return 0;
}