#include <stdio.h>
#define NUM 50

int main(void){
    int i, sum, max = 0, min = 0;
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

    for(int a = 0; a < NUM; a++){
        if(max < p[a]){
            max = p[a];
        }
    }
    min = max;
    for(int a = 0; a < NUM; a++){
        if(min > p[a]){
            min = p[a];
        }
    }
    printf("ave:%lf\n", ave);
    printf("dev:%lf\n", dev);
    printf("max:%d\n", max);
    printf("min:%d\n", min);

    return 0;
}

