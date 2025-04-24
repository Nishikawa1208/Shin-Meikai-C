#include <stdio.h>

int main(void){
    int d, k = 0, n = 5075;
    int c[8] = {0};
    while(n > 0){
        d = n % 8;
        c[d]++;
        n /= 8;
        ++k;
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], d, k, n);

    return 0;
}