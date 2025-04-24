#include <stdio.h>
#define N_MAX 100

int main(void)
{
    int i, s = -1;
    double a;
    for (i = 1; i <= N_MAX; i++){
        a=(double)s/i;
        s=-s; /* s *= -1 と等価*/
        printf("%d,%f\n", i, a);
    }
    return 0;
}
