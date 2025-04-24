#include <stdio.h>
#define N_MAX 10000000

int main(void)
{
    int i;
    double k, j, sum = 0;
    
    for(i = 1; i <= N_MAX; i++){
        k = 1.0 / (2.0 * i - 1) / (2.0 * i + 1);
        j = sum;
        sum += k;

        if(((sum - j) <= 0.00001) || ((sum - j) <= 0.00001)){
            break;
        }
    }

    printf("%d", i);
    return 0;
}