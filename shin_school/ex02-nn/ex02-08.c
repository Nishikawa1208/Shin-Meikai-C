#include <stdio.h>

int main(void)
{
    int a, c;
    double b;

    printf("大人のバス料金を入力してください："); scanf("%d", &a);

    b = (double)a / 20;
    c = b + 0.5;
    c = c * 10;

    printf("子供の運賃は%d円です。", c);

    return 0;
}