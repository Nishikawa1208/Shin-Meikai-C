#include <stdio.h>

int main(void)
{
    int y;
    double x;

    printf("正の実数値を入力してください："); scanf("%lf", &x);

    y = x + 0.5;

    printf("%lfを四捨五入すると%dです。", x, y);

    return 0;
}