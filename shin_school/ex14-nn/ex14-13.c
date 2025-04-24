#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, r;
    srand((unsigned)time(NULL));
    for(i = 0; i < 80; i++){
        r = rand();
        printf(" %6d", r);
        if(i % 10 == 9) putchar('\n');
    }
    return 0;
}