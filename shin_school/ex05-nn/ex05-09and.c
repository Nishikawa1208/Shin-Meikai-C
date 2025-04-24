#include <stdio.h>

int main(void)
{
    double x, y;

    printf("二次元座標のx座標を入力してください："); scanf("%lf", &x);
    printf("二次元座標のy座標を入力してください："); scanf("%lf", &y);

    if((-5 < x) && (x < 5) && (-8 <= y) && (y <= 8)){
        puts("IN");
    }else{
        puts("OUT");
    }
    return 0;
}