#include <stdio.h>

int main(void){
    int c, d;
    double u = -1.76e+1, v = -3.68e+1, w;
    w = u*v;
    if((u == 0) && (v == 0)){
        c = 0;
    }else if(u > 0){
        if(v > 0){
            c = 1;
        }else{
            c = 4;
        }
    }else{
        if(v > 0){
            c = 2;
        }else{
            c = 3;
        }
    }

    printf("%d\n%d\n%lf\n%lf\n%lf\n", c, d, u, v, w);

    return 0;
}