#include <stdio.h>

int main(){
    int a = 3;
    double x = 2.5;
    printf("a: val = %d, addr = %p, size = %d\n", a, &a, sizeof(a));
    printf("x: val = %f, addr = %p, size = %d\n", x, &x, sizeof(x));
    return 0;
}