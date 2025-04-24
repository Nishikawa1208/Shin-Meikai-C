#include <stdio.h>

int absvalue(double x, double *y){
    *y = x;
    if(x == 0){
        return 0;
    }

    if(x < 0){
        *y = -x;
        return -1;
    }else{
        return 1;
    }
}