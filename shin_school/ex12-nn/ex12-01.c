#include <stdio.h>

int check(double a, double b, double c){
    if(
        (a*a == b*b + c*c)
        ||
        (b*b == c*c + a*a)
        ||
        (c*c == a*a + b*b)
    )return 1;
    return 0;
}

int main()
{
    double x, y, z;

    printf("x:");   scanf("%lf", &x);
    printf("y:");   scanf("%lf", &y);
    printf("z:");   scanf("%lf", &z);

    if(check(x, y, z) == 1){
        printf("直角三角形である。\n");
    }else{
        printf("直角三角形でない。\n");
    }
    return 0;
}

