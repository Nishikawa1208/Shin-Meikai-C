#include <stdio.h>
#define N_MAX 10000000

int main(void)
{
    int i;
    double k, sum = 0;
    
    for(i = 1; i <= N_MAX; i++){
        k = 1.0 / (2.0 * i - 1) / (2.0 * i + 1);
        sum += k;

        if(((0.5 - (0.001*0.01)) <= sum) && (sum <=(0.5 + (0.001*0.01)))){
            break;
        }
    }

    printf("%d", i);
    return 0;
}