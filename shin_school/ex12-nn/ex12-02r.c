#include <stdio.h>

unsigned long fraction2(unsigned long n){
    if(n == 1UL) return 1UL;
    return n*fraction2(n - 1);
}