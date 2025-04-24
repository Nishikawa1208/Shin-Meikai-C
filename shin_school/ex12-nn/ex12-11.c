#include <stdio.h>
#include <math.h>

#define MY_PI 3.141592653589793238462643

double fan_area(double r, double a){
    double s;
    s = ((a / 360) * r * r * MY_PI);

    return s;
}

int main(void){

    double r, a;

    printf("Hankei:");  scanf("%lf", &r);
    printf("Kakudo:");  scanf("%lf", &a);

    printf("Menseki:%lf", fan_area(r, a));

    return 0;
}