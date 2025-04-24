#include <stdio.h>
#include <math.h>
#include "pi.h"

int main(void)
{
    double x, y;

    printf("角度(degree)を入力してください。"); scanf("%lf", &x);

    y = (x * PI) / 180;

    if((x == 90) || (x == 270)){
        printf("sin%lf° = %lf\n", x, sin(y));
        printf("cos%lf° = %lf\n", x, cos(y));
        printf("tan%lf° = N/A\n", x);
    }else{
        printf("sin%lf° = %lf\n", x, sin(y));
        printf("cos%lf° = %lf\n", x, cos(y));
        printf("tan%lf° = %lf\n", x, tan(y));
    }
    return 0;
}