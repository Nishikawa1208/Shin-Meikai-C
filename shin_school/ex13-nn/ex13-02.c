#include <stdio.h>

int main(){
    int a = 3;
    int *p = NULL;
    printf("a = %d, &a = %p\n", a, &a);
    printf("p = %p, *p = %d\n", p, *p);
    p = &a;
    *p += 2;
    printf("a = %d, &a = %p\n", a, &a);
    printf("p = %p, *p = %d\n", p, *p);
    return 0;
}