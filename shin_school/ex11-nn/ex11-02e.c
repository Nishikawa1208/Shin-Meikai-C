#include <stdio.h>
#define NUM 50

int main(void) {
    int i, sum;
    int p[NUM]; /* NUMはマクロで定義 */
    double ave, dev, sum2, tmp;
    int top1, top2, top3; /* 上位3名の点数を格納 */
    int top_sum;          /* 上位3名の合計点 */

    /* 入力と合計の計算 */
    for (sum = i = 0; i < NUM; i++) {
        scanf("%d", &p[i]);
        sum += p[i];
    }

    /* 平均値の計算 */
    ave = (double)sum / NUM;

    /* 分散の計算 */
    for (sum2 = i = 0; i < NUM; i++) {
        tmp = p[i] - ave;
        sum2 += tmp * tmp;
    }
    dev = sum2 / NUM;

    /* 上位3名の点数を求める */
    top1 = top2 = top3 = 0; /* 初期化 */
    for (i = 0; i < NUM; i++) {
        if (p[i] > top1) {
            top3 = top2;
            top2 = top1;
            top1 = p[i];
        } else if (p[i] > top2) {
            top3 = top2;
            top2 = p[i];
        } else if (p[i] > top3) {
            top3 = p[i];
        }
    }

    /* 上位3名の合計 */
    top_sum = top1 + top2 + top3;

    /* 結果の出力 */
    printf("ave: %lf\n", ave);
    printf("dev: %lf\n", dev);
    printf("Top 3 sum: %d\n", top_sum);

    return 0;
}
