#include <stdio.h>

int main(void){
    int i, j, n;
    for(i = 4; i > 0; i--){
        for(j = 0; i * 2 - 1 > j; j++){
            n = i * 2 - 1 + j * 10 + 10;;
            printf("%3d", n);
            putchar(' ');
        }
        putchar('\n');
    }
}