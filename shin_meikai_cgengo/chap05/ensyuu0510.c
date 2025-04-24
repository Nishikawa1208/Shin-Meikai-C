#include <stdio.h>

#define ROW1 4 // 第一行列の行数
#define COL1 3 // 第一行列の列数、第二行列の行数
#define COL2 4 // 第二行列の列数

int main() {
    int matrix1[ROW1][COL1]; // 4行3列の行列
    int matrix2[COL1][COL2]; // 3行4列の行列
    int result[ROW1][COL2];  // 積の行列 4行4列
    int i, j, k;

    // 第一行列の入力
    printf("4行3列の行列aを入力してください:\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL1; j++) {
            printf("[%d]行目[%d]列目 = ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 第二行列の入力
    printf("3行4列の行列bを入力してください:\n");
    for (i = 0; i < COL1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("[%d]行目[%d]列目 = ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 結果行列の初期化
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            result[i][j] = 0;
        }
    }

    // 行列の積の計算
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            for (k = 0; k < COL1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // 結果の出力
    printf("結果の行列 (4行4列):\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
