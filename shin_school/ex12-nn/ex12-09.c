#include <stdio.h>
#include <math.h>

double distance(double x, double y){
    double a = 0;
    a = (x * x) + (y * y);
    a = sqrt(a);

    return a;
}

int main(void){
    double x, y;

    printf("x:");   scanf("%lf", &x);
    printf("y:");   scanf("%lf", &y);

    printf("distance:%lf", distance(x, y));

    return 0;
}