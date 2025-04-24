#include <stdio.h>

void taxi(int n, int *c, int *e){
    *c = (n + 3) / 4;
    *e = (*c * 4) - n;
}