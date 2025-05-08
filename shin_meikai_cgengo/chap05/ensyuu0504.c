#include <stdio.h>

#define ARRAY_SIZE 7   // 配列の要素数を定義するマクロ

int main(void)
{
    int x[ARRAY_SIZE];   // 配列の宣言時にマクロを使用

    for(int i = 0; i < ARRAY_SIZE; i++) { // 要素に値を読み込む
        printf("x[%d]：", i);
        scanf("%d", &x[i]);
    }

    for(int i = 0; i < ARRAY_SIZE / 2; i++) { // 要素の並びを反転
        int t = x[i];
        x[i] = x[ARRAY_SIZE - 1 - i];
        x[ARRAY_SIZE - 1 - i] = t;
    }

    puts("反転しました。");
    for(int i = 0; i < ARRAY_SIZE; i++)  // 要素の値を表示
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}