#include <stdio.h>

int main() {
    double r, d;
    
    // 入力を受け取る
    printf("半径 r を入力: ");
    scanf("%lf", &r);
    
    printf("直線の切片 d を入力: ");
    scanf("%lf", &d);

    // 判別式の計算
    double D = 8 * r * r - 4 * d * d;

    // 交点の個数を判定
    if (D > 0) {
        printf("共有点の個数: 2\n");
    } else if (D == 0) {
        printf("共有点の個数: 1\n");
    } else {
        printf("共有点の個数: 0\n");
    }

    return 0;
}
