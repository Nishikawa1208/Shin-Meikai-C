#include <stdio.h>

int main(void) {
    double sum = 0.0, pi = 3.141592653, a = 1.0;
    int c;

    for (c = 1, sum = 0.0; ; c++, a *= -1.0) {
        sum += a / (2.0 * c - 1.0);
        if ((sum * 4.0 > pi - (pi * 0.00001)) && (sum * 4.0 < pi + (pi * 0.00001))) break;
    }
    
    printf("finished: %d, %lf\n", c, sum * 4.0);
    return 0;
}