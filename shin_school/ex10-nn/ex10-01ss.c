#include <stdio.h>
#include <limits.h>

int main(void)
{
    signed short f = 1; // signed short型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %hd\n", i, f); // %hdはsigned short型の出力形式
        i++;
    } while (i <= SHRT_MAX / f); // signed short型のオーバーフローを防ぐ条件

    return 0;
}
