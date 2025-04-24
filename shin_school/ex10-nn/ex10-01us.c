#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned short f = 1; // unsigned short型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %hu\n", i, f);
        i++;
    } while (i <= USHRT_MAX / f); // オーバーフローを防ぐ条件

    return 0;
}
