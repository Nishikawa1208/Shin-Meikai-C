#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;

    printf("実数xを入力してください。"); scanf("%lf", &x);
    printf("実数yを入力してください。"); scanf("%lf", &y);

    printf("tan^-1 %lf = %lf\n", x, atan(x));
    printf("tan^-1 (%lf / %lf) = %lf\n", y, x, atan2(y, x));

    return 0;
}