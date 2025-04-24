#include <stdio.h>

int floatnum(unsigned k, double *f) {
    int i;
    double u;
    u = k;
    for(i = 0; u > 10; i++){
        u /= 10;
    }

    *f = u;

    return i;
}

int main(void){
    double f;
    unsigned k;
    int s;
    do{
        printf("正の整数を入力してください:");
        scanf("%u", &k);
        if(k <= 0){
            printf("もう一度入力してください。\n");
        }
    }while (k <= 0);
    s = floatnum(k, &f);

    printf("k = %u, k = %.1f x 10^%d\n", k, f, s);

    return 0;

}