#include <stdio.h>
#include <float.h>

int main(void)
{
    double f = 1.0;  // double型の初期値を1に設定
    int i = 2;

    do {
        f *= i;
        printf("%d! = %.0f\n", i, f);
        i++;
    } while (i <= DBL_MAX / f);  // double型のオーバーフローを防ぐ条件

    return 0;
}
