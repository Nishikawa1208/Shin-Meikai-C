#include <stdio.h>

double x_intercept(double a, double b){
    b *= -1;
    b /= a;

    return b;
}

int main(void){

    double a, b;
    printf("a:");   scanf("%lf", &a);
    printf("b:");   scanf("%lf", &b);

    printf("x=%lf,y=0", x_intercept(a, b));

    return 0;
}