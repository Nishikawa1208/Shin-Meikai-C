#include <stdio.h>

unsigned long fraction1(unsigned long n){
    unsigned long a = 1UL;
    for(; n > 1UL; n--){
        a *= n;
    }
    return a;
}