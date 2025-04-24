#include <stdio.h>

int main(){
    int a = 3, b = 5, c;
    int *p = NULL;
    printf("a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n", a, b);
    p = &a;
    a = b;
    b = *p;
    printf("a = %d, b = %d, *p = %d\n", a, b, *p);
    return 0;
}