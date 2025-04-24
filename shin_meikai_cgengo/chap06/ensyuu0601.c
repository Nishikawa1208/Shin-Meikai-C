#include <stdio.h>

int min2(int a, int b)
{
    return a > b ? b : a;
}

int main(void)
{
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数a:");   scanf("%d", &a);
    printf("整数b:");   scanf("%d", &b);

    printf("最大値は%dです。\n", min2(a, b));

    return 0;
}