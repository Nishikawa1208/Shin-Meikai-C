#include <stdio.h>
#include <float.h>

int main(void)
{
    long double epsilon_ld = 1.0L; // long double型の初期値を1に設定

    // long double型のイプシロンを計算
    while ((1.0L + epsilon_ld) != 1.0L)
    {
        epsilon_ld /= 2.0L;
    }
    epsilon_ld *= 2.0L; // ループを抜けたときの値は条件を満たさないため、2倍戻す

    printf("Machine epsilon for long double: %Le\n", epsilon_ld);

    return 0;
}
