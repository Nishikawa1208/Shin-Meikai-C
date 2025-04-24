#include <stdio.h>
#include <float.h>

int main(void)
{
    long double f = 1.0L;  // long double型の初期値を1に設定
    int i = 2;

    do {
        f *= i;
        printf("%d! = %.0Lf\n", i, f);
        i++;
    } while (i <= LDBL_MAX / f);  // long double型のオーバーフローを防ぐ条件

    return 0;
}
