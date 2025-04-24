#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed char f = 1; // signed char型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %d\n", i, f); // %dはsigned char型の出力形式
        i++;
    } while (i <= SCHAR_MAX / f); // signed char型のオーバーフローを防ぐ条件

    return 0;
}
