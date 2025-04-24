#include <stdio.h>

int main(void){
    int a = 0653, b= 0x1f1;
    double x, y, z;
    x = a/10 + 0.9;
    a = a/10.0 + 0.9;
    y = (int)x/10.0;
    z = (double)b/10;
    b %= 0x100;

    printf("%d\n%d\n%lf\n%lf\n%lf\n", a, b, x, y, z);

    return 0;
}