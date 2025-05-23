#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned char f = 1U; // unsigned char型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %u\n", i, f);
        i++;
    } while (i <= UCHAR_MAX / f); // unsigned char型のオーバーフローを防ぐ条件

    return 0;
}
