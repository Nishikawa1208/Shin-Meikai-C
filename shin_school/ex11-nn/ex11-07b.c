#include <stdio.h>
#define NUM 50

int main(void) {
    int i, j, k = 0;
    int d[NUM] = {0};      // 点数
    int index[NUM] = {0};  // 出席番号
    int swapped;           // 交換が行われたかどうかを記録するフラグ

    // 出席番号を初期化
    for (i = 0; i < NUM; i++) {
        index[i] = i + 1; // 出席番号は1からNUMまで
    }

    // 点数を入力
    for (i = 0; i < NUM; i++) {
        scanf("%d", &d[i]);
    }

    // バブルソートの最適化（交換がなければ終了）
    for (i = 0; i < NUM - 1; i++) {
        swapped = 0; // 各パスの初めに交換フラグをリセット
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

                swapped = 1; // 交換が行われたことを記録
            }
            k++;
        }
        if (!swapped) {
            // 交換が行われなかった場合、整列済みとみなして終了
            break;
        }
    }

    // 整列後の結果を出力
    for (i = 0; i < NUM; i++) {
        printf("Rank %2d: ID %3d, Score %3d\n", i + 1, index[i], d[i]);
    }
    printf("How many comparisons: %d\n", k);

    return 0;
}
