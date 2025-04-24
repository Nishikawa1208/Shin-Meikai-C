#include <stdio.h>

int main(void) {
    double pi = 3.141592653, sum, n;
    
    for (n = 1.0, sum = 0.0; ; n++) {
        sum += 1.0 / ((4.0 * n - 3.0) * (4.0 * n - 1.0));
        
        if (sum * 8.0 > pi - (pi * 0.00001)) break;
    }
    
    printf("finished: %d, %lf\n", (int)n, sum * 8.0);
    return 0;
}