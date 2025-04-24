#include <stdio.h>
#define N_MAX 100

int main(void)
{
    int i;
    double a, s = 1;
    for (i = 1; i <= N_MAX; i++){

        s *= -9.0 / 10;
        
        printf("%d,%f\n", i, s);
    }
    return 0;
}
