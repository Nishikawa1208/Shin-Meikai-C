#include <stdio.h>

int main(void)
{
    int d, t;

    printf("正の整数を入力してください："); scanf("%d", &d);

    t = (d / 10) % 10;

    printf("十の位の数は%dです。", t);

    return 0;
}