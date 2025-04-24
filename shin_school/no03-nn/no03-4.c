#include <stdio.h>

int main(void)
{
    double x, y;

    scanf("%le", &x);
    y = 1.0 / x;
    printf("%g\n", y);
    return 0;
}