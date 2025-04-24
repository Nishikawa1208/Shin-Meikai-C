#include <stdio.h>

int eqn2(double a, double b, double c, double *x1, double *x2){
    double x;
    x = b*b - 4*a*c;
    *x1 = ((-b + sqrt(x)) / 2*a);
    *x2 = ((-b - sqrt(x)) / 2*a);
}