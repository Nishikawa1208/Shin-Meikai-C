#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main(void)
{
    int x;

    puts("整数を入力せよ。");
    printf("整数:");   scanf("%d", &x);

    printf("xの3乗は%dです。\n", cube(x));

    return 0;
}