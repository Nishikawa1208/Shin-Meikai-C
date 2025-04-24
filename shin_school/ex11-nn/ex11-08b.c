#include <stdio.h>
#define NUM 50

int main(void) {
    int i, j, k = 0;
    int d[NUM] = {0};      // 点数
    int index[NUM] = {0};  // 出席番号
    int last_swap;         // 最後に交換が行われた位置

    // 出席番号を初期化
    for (i = 0; i < NUM; i++) {
        index[i] = i + 1; // 出席番号は1からNUMまで
    }

    // 点数を入力
    for (i = 0; i < NUM; i++) {
        scanf("%d", &d[i]);
    }

    // バブルソートの改良版
    int n = NUM; // 現在のソート対象の範囲
    do {
        last_swap = 0; // 各パスの開始時にリセット
        for (j = 1; j < n; j++) {
            if (d[j - 1] > d[j]) {
                // 点数の入れ替え
                int tmp = d[j - 1];
                d[j - 1] = d[j];
                d[j] = tmp;

                // 出席番号の入れ替え
                tmp = index[j - 1];
                index[j - 1] = index[j];
                index[j] = tmp;

                last_swap = j; // 最後に交換が行われた位置を記録
            }
            k++; // 比較回数をカウント
        }
        n = last_swap; // 次回のパスでは、この位置までで十分
    } while (last_swap > 0);

    // 整列後の結果を出力
    for (i = 0; i < NUM; i++) {
        printf("Rank %2d: ID %3d, Score %3d\n", i + 1, index[i], d[i]);
    }
    printf("How many comparisons: %d\n", k);

    return 0;
}
