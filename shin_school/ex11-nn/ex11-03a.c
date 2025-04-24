#include <stdio.h>
#define NUM 1000

int main(void) {
    int n, i;
    int divisor_count[NUM] = {0}; // 約数の個数を記録する配列

    // 約数の個数を効率よく計算
    for (i = 1; i < NUM; i++) {
        for (n = i; n < NUM; n += i) {
            divisor_count[n]++; // i は n の約数
        }
    }

    // 結果の出力
    for (n = 1; n < NUM; n++) {
        printf("%d の約数の個数: %d\n", n, divisor_count[n]);
    }

    return 0;
}
