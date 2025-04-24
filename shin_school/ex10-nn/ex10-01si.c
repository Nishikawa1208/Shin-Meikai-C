#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed int f = 1; // signed int型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %d\n", i, f); // %dはsigned int型の出力形式
        i++;
    } while (i <= INT_MAX / f); // signed int型のオーバーフローを防ぐ条件

    return 0;
}
