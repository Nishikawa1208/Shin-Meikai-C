#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned long f = 1UL; // unsigned long型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %lu\n", i, f);
        i++;
    } while (i <= ULONG_MAX / f); // オーバーフローを防ぐ条件

    return 0;
}