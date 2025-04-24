#include <stdio.h>
#include <math.h>

void xy2polar(double x, double y, double *r, double *theta){
    *r = sqrt((x*x) + (y*y));
    *theta = atan2(y, x);
    if(*theta < 0){
        *theta *= -1;
    }
}