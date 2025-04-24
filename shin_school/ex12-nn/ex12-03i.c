#include <stdio.h>

unsigned long summation(unsigned long n){
    int i = 0;
    unsigned long j = 0;
    while (i <= n){
        j += i;
        i++;
    }

    return j;
}

int main(void){
    unsigned long n;

    printf("n:");   scanf("%ld", &n);
    printf("%ld\n", summation(n));

    return 0;
}