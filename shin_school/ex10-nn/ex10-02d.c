#include <stdio.h>
#include <float.h>

int main(void)
{
    double epsilon_d = 1.0; // double型の初期値を1に設定

    // double型のイプシロンを計算
    while ((1.0 + epsilon_d) != 1.0)
    {
        epsilon_d /= 2.0;
    }
    epsilon_d *= 2.0; // ループを抜けたときの値は条件を満たさないため、2倍戻す

    printf("Machine epsilon for double: %e\n", epsilon_d);

    return 0;
}
