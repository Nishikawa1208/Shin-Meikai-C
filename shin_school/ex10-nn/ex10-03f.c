#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 1.0F;  // float型の初期値を1に設定
    int i = 2;

    do {
        f *= i;
        printf("%d! = %.0f\n", i, f);
        i++;
    } while (i <= FLT_MAX / f);  // float型のオーバーフローを防ぐ条件

    return 0;
}
