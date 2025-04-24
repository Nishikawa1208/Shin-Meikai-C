#include <stdio.h>
#include <string.h>

//--- 定数をマクロで定義 ---//
#define STR_COUNT 10     // 文字列の最大個数
#define STR_LEN   128    // 1つの文字列の最大長

//--- 文字列の配列を読み込む関数 ---//
int read_strary(char s[][STR_LEN]) {
    int i;

    for (i = 0; i < STR_COUNT; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (strcmp(s[i], "$$$$$") == 0)
            break;
    }

    return i; // 入力された文字列の個数を返す
}

//--- 文字列の配列を表示する関数 ---//
void put_strary(const char s[][STR_LEN], int n) {
    for (int i = 0; i < n; i++) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

int main(void) {
    char cs[STR_COUNT][STR_LEN];
    int count;

    count = read_strary(cs);   // 文字列の読み込み終了
    put_strary(cs, count);     // 読み込まれた文字列のみ表示

    return 0;
}