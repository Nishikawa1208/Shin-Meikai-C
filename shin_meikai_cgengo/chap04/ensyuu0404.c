#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数を入力せよ：");
    scanf("%d", &no);

    if (no >= 1) { // 正の整数の場合のみ処理
        while (no >= 1) {
            printf("%d ", no--); // noの値を表示した後にデクリメント
        }
        printf("\n"); // 改行
    }

    return 0;
}
