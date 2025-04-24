#include <stdio.h>
#define N_MAX 100

int main(void)
{
    int i;
    double k, sum = 0;
    
    for(i = 1; i <= N_MAX; i++){
        k = 1.0 / (2.0 * i - 1) / (2.0 * i + 1);
        sum += k;
        printf("%3d, %g\n", i, sum);
    }
    return 0;
}