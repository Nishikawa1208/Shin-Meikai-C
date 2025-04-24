#include <stdio.h>

void c2y(int c, int *sy, int *ey){
    *sy = (c - 1) * 100;
    *ey = (c * 100) - 1;
}