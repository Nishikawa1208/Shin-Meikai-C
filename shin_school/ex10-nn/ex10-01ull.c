#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned long long f = 1ULL; // unsigned long long型の初期値を1に設定
    int i = 1;

    do {
        f *= i;
        printf("%d! = %llu\n", i, f);
        i++;
    } while (i <= ULLONG_MAX / f); // オーバーフローを防ぐ条件

    return 0;
}
