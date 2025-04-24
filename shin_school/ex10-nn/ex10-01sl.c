#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed long f = 1; // signed long型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %ld\n", i, f); // %ldはsigned long型の出力形式
        i++;
    } while (i <= LONG_MAX / f); // signed long型のオーバーフローを防ぐ条件

    return 0;
}
