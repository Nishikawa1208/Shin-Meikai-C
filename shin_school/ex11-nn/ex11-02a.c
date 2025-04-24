#include <stdio.h>
#include <math.h>
#define NUM 50

int main(void){
    int i, sum;
    int p[NUM]; /* NUMはマクロで定義*/
    double ave, dev, dev2, sum2, tmp;
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

    dev2 = sqrt(dev);
    printf("ave:%lf\n", ave);
    printf("dev:%lf\n", dev);
    printf("sqrt(dev)%lf\n", dev2);

    return 0;
}

