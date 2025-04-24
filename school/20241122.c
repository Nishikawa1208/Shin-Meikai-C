#include <stdio.h>
#define NUM 5

int main(void){
    int i, sum;
    int p[NUM];
    double ave, dev, sum2, tmp;
    for(sum = i = 0; i < NUM; i++){
        printf("点数を入力してください。"); scanf("%d", &p[i]);
        sum += p[i];
    }
    ave = (double)sum / NUM;
    for(sum2 = i = 0; i < NUM; i++){
        tmp = p[i] - ave;
        sum2 += tmp * tmp;
    }
    dev = sum2 / NUM;
    printf("平均は%f点、分散は%f点です。\n", ave, dev);

    return 0;
}