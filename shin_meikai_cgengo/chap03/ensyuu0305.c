#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // “™‰¿‰‰Zq‚ÌŠm”F
    printf("a == b: %d\n", (a == b)); // 0 (‹U)
    printf("a != b: %d\n", (a != b)); // 1 (^)

    // ŠÖŒW‰‰Zq‚ÌŠm”F
    printf("a < b: %d\n", (a < b));   // 1 (^)
    printf("a > b: %d\n", (a > b));   // 0 (‹U)
    printf("a <= b: %d\n", (a <= b)); // 1 (^)
    printf("a >= b: %d\n", (a >= b)); // 0 (‹U)

    return 0;
}
