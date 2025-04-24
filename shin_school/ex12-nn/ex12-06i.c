#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846264338327950288

double deg2rad(double d){
    d *= M_PI;
    d /= 180;
    return d;
}

int main(void){
    double n;
    printf("degree:");  scanf("%lf", &n);
    printf("radian:%lf", deg2rad(n));

    return 0;
}