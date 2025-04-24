#include <stdio.h>
#define NUM 50

int main(void) {
    int i, j, k = 0;
    int d[NUM] = {0};      // 点数
    int index[NUM] = {0};  // 出席番号

    // 出席番号を初期化
    for (i = 0; i < NUM; i++) {
        index[i] = i + 1; // 出席番号は1からNUMまで
    }

    // 点数を入力
    for (i = 0; i < NUM; i++) {
        scanf("%d", &d[i]);
    }

    // バブルソートで点数を昇順に整列（出席番号も一緒に移動）
    for (i = 0; i < NUM - 1; i++) {
        for (j = NUM - 1; j > i; j--) {
            if (d[j - 1] > d[j]) {
                // 点数の入れ替え
                int tmp = d[j - 1];
                d[j - 1] = d[j];
                d[j] = tmp;

                // 出席番号の入れ替え
                tmp = index[j - 1];
                index[j - 1] = index[j];
                index[j] = tmp;
            }
            k++;
        }
    }

    // 整列後の結果を出力
    for (i = 0; i < NUM; i++) {
        printf("Rank %2d: ID %3d, Score %3d\n", i + 1, index[i], d[i]);
    }
    printf("How many swaps: %d\n", k);

    return 0;
}
