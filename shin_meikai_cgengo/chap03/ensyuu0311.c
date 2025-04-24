#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数1：");  scanf("%d", &n1);
    printf("整数2：");  scanf("%d", &n2);

    // 差を計算
    int difference = n1 - n2;

    // 絶対値を手動で計算
    if (difference < 0) {
        difference = -difference;
    }

    // 論理OR演算子を使用して条件をチェック
    if (difference <= 10 || difference >= 11) {
        if (difference <= 10) {
            printf("それらの差は 10 以下です。\n");
        } else {
            printf("それらの差は 11 以上です。\n");
        }
    }

    return 0;
}
