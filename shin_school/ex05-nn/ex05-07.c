#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;

    printf("実数を入力してください。"); scanf("%lf", &x);

    printf("sin^-1 %lf = %lf\n", x, asin(x));
    printf("cos^-1 %lf = %lf\n", x, acos(x));

    return 0;
}