#include <stdio.h>

int main(void)
{
    double x1, y1, x2, y2, katamuki, seppen;

    printf("二次元座標の点P1のx座標を入力してください："); scanf("%lf", &x1);
    printf("二次元座標の点P1のy座標を入力してください："); scanf("%lf", &y1);
    printf("二次元座標の点P2のy座標を入力してください："); scanf("%lf", &x2);
    printf("二次元座標の点P2のy座標を入力してください："); scanf("%lf", &y2);

     if (x1 == x2) {
        printf("直線の式: x = %.2f\n", x1);
    } else {
        // 傾き a を計算
        katamuki = (y2 - y1) / (x2 - x1);
        // 切片 b を計算
        seppen = y1 - katamuki * x1;

        // 直線の式を出力
        printf("直線の式: y = %.2fx + %.2f\n", katamuki, seppen);
    }

    return 0;
}