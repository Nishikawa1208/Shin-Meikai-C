#include <stdio.h>

unsigned long permutation(unsigned long n, unsigned long k){
    unsigned long i = 1;
    unsigned long j = n;
    while (j > (n - k)){
        i *= j;
        j--;
    }

    return i;
}

int main(void){
    unsigned long n, k;

    printf("n:");   scanf("%ld", &n);
    printf("k:");   scanf("%ld", &k);
    printf("%ld\n", permutation(n, k));

    return 0;
}