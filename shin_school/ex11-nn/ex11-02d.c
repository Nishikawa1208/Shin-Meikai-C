#include <stdio.h>
#define NUM 50

int main(void){
    int i, sum, q = 0;
    int p[NUM]; /* NUMはマクロで定義*/
    double ave, dev, sum2, tmp;
    for(sum = i = 0; i < NUM; i++){
        scanf("%d", &p[i]);
        sum += p[i];
    }
    ave = (double)sum / NUM;
    for(sum2 = i = 0; i < NUM; i++){
        tmp = p[i] - ave;
        sum2 += tmp * tmp;
    }
    dev = sum2 / NUM;

    for(i = 0; i < NUM; i++){
        if(ave < p[i]){
            q++;
        }
    }
    printf("ave:%lf\n", ave);
    printf("dev:%lf\n", dev);
    printf("upper than ave:%d", q);

    return 0;
}

