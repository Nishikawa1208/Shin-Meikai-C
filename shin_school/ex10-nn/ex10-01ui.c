#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int f = 1U; // unsigned int型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %u\n", i, f);
        i++;
    } while (i <= UINT_MAX / f); // オーバーフローを防ぐ条件

    return 0;
}
