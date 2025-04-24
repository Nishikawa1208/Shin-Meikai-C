#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed long long f = 1; // signed long long型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %lld\n", i, f); // %lldはsigned long long型の出力形式
        i++;
    } while (i <= LLONG_MAX / f); // signed long long型のオーバーフローを防ぐ条件

    return 0;
}
