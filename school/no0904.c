#include <stdio.h>

int main(void) {
    double pi = 3.141592653, sum, n;
    int c;
    
    for (c = 1, sum = 1.0, n = 6.0; ; c++, n += 6.0) {
        sum *= (n * n) / ((n - 1.0) * (n + 1.0));
        if (sum * 3.0 > pi - (pi * 0.00001)) break;
    }
    
    printf("finished: %d, %lf\n", c, sum * 3.0);
    return 0;
}