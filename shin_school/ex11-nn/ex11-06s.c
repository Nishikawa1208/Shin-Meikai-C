#include <stdio.h>
#define NUM 50

int main(void) {
    int i, j, m, k = 0;
    int d[NUM] = {0};      // 点数
    int index[NUM] = {0};  // 出席番号（0からNUM-1）

    // 出席番号を初期化
    for (i = 0; i < NUM; i++) {
        index[i] = i + 1; // 出席番号は1から始まる
    }

    // 点数を入力
    for (i = 0; i < NUM; i++) {
        scanf("%d", &d[i]);
    }

    // 選択ソートで点数を昇順に並び替え（出席番号も一緒に移動）
    for (i = 0; i < NUM - 1; i++) {
        m = i;
        for (j = i + 1; j < NUM; j++) {
            if (d[m] > d[j]) {
                m = j;
            }
        }
        // 点数の入れ替え
        int tmp = d[i];
        d[i] = d[m];
        d[m] = tmp;

        // 出席番号の入れ替え
        tmp = index[i];
        index[i] = index[m];
        index[m] = tmp;

        k++;
    }

    // 整列後の出席番号と点数を出力
    for (i = 0; i < NUM; i++) {
        printf("Rank %2d: ID %3d, Score %3d\n", i + 1, index[i], d[i]);
    }
    printf("How many swaps: %d\n", k);

    return 0;
}
