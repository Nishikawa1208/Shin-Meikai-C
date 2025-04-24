#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846264338327950288

double deg2rad(double d) {
    // 角度を 0〜360 の範囲に正規化
    while (d < 0) d += 360;  // 負の値を補正
    while (d >= 360) d -= 360; // 360 を超える値を補正
    if(d > 180){
        d *= -1;
        d += 180;
    }

    // ラジアンに変換
    return d * M_PI / 180;
}

int main(void) {
    double n;
    printf("degree: ");
    scanf("%lf", &n);
    printf("radian: %lf\n", deg2rad(n));

    return 0;
}
