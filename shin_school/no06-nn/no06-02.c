#include <stdio.h>

int main(void)
{
    double c, f, t;

    t = 0.0;

    while(t != 1.0){
        c = 24.0 + t;
        f = 9.0 * c / 5.0 + 32.0;

        printf("%lf %lf", c, f);

        t = t + 0.1;
    }
    
    return 0;
}