#include <stdio.h>
#include <float.h>

int main(void)
{
    float epsilon_f = 1.0f; // float型の初期値を1に設定

    // float型のイプシロンを計算
    while ((1.0f + epsilon_f) != 1.0f)
    {
        epsilon_f /= 2.0f;
    }
    epsilon_f *= 2.0f; // ループを抜けたときの値は条件を満たさないため、2倍戻す

    printf("Machine epsilon for float: %e\n", epsilon_f);

    return 0;
}
