#include <stdio.h>

int main(void)
{
    double f, s, a;

    printf("足の実寸をセンチメートルで入力してください："); scanf("%lf", &f);

    s = f * 2;
    a = s + 1;
    s = a / 2;

    printf("靴のサイズは%.1lfセンチメートルです。", s);

    return 0;
}