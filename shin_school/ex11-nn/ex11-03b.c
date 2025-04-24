#include <stdio.h>

int main(void) {
    int n, i;
    int is_prime; // 素数判定用のフラグとしてint型を使用

    printf("100未満の素数:\n");
    for (n = 2; n < 100; n++) { // 2から99までをチェック
        is_prime = 1; // 初期状態では素数と仮定 (1: 素数, 0: 素数でない)
        for (i = 2; i * i <= n; i++) { // 2からsqrt(n)までで割り切れるか確認
            if (n % i == 0) {
                is_prime = 0; // 割り切れた場合は素数ではない
                break;
            }
        }
        if (is_prime) {
            printf("%d ", n); // 素数を出力
        }
    }
    printf("\n");
    return 0;
}
