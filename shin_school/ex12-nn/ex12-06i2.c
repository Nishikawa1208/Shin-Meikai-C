#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846264338327950288

double deg2rad(double d) {
    while (d < -180) d += 360;
    while (d > 180) d -= 360;

    return d * M_PI / 180;
}

int main(void) {
    double n;
    printf("degree: ");
    scanf("%lf", &n);
    printf("radian: %lf\n", deg2rad(n));

    return 0;
}
