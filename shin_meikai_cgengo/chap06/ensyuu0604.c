#include <stdio.h>

int sqr(int n)
{
    return n * n;
}

int main(void)
{
    int x, y;

    puts("整数を入力せよ。");
    printf("整数:");   scanf("%d", &x);

    printf("%dの4乗は%dです。\n", x, sqr(sqr(x)));

    return 0;
}