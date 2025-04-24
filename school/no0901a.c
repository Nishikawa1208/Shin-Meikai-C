#include <stdio.h>

int main(void) {
    double sum, n;
    
    for (n = 1.0, sum = 0.0; ; n++) {
        sum += 1.0 / (n * (n + 2.0));
        
        if (sum > 0.75 - (0.75 * 0.00001)) break;
    }
    
    printf("finished: %d, %lf\n", (int)n, sum);
    return 0;
}