#include <stdio.h>

void calctime(int *h, int *m, int *s, int t){
    t = t + (3600 * *h) + (60 * *m) + (*s);
    *h = t / 3600;
    *m = (t - (3600 * *h)) / 60;
    *s = t % 60;
}