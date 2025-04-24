#include <stdio.h>
#define NUM 50

int main(void){
    int i, q = 0, max = 0;
    int p[NUM]; /* NUMはマクロで定義 */
    double ave, dev, sum2, tmp;
    int sum = 0;

    for(i = 0; i < NUM; i++){
        scanf("%d", &p[i]);
        sum += p[i];
        if(max < p[i]){
            max = p[i];
        }
    }
    ave = (double)sum / NUM;

    sum2 = 0.0;
    for(i = 0; i < NUM; i++){
        tmp = p[i] - ave;
        sum2 += tmp * tmp;
    }
    dev = sum2 / NUM;  /* 母分散 */
    /* dev = sum2 / (NUM - 1); */ /* 不偏分散の場合はこちらを使用 */

    for(i = 0; i < NUM; i++){
        if(max == p[i]){
            q++;
        }
    }

    printf("ave:%lf\n", ave);
    printf("dev:%lf\n", dev);
    printf("max people:%d\n", q);

    return 0;
}
