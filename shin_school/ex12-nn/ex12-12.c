#include <stdio.h>

unsigned gcd(unsigned a, unsigned b) {
    unsigned t;

    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main(void) {
    unsigned a, b;

    printf("a: ");   scanf("%u", &a);
    printf("b: ");   scanf("%u", &b);

    printf("GCD: %u\n", gcd(a, b));

    return 0;
}
