#include <stdio.h>

int main(void)
{
    double x, y;

    printf("二次元座標のx座標を入力してください："); scanf("%lf", &x);
    printf("二次元座標のy座標を入力してください："); scanf("%lf", &y);

    if((x == 0) || (y == 0)){
        puts("0");
    }else if((x > 0) && (y > 0)){
        puts("1");
    }else if((x < 0) && (y > 0)){
        puts("2");
    }else if((x < 0) && (y < 0)){
        puts("3");
    }else if((x > 0) && (y < 0)){
        puts("4");
    }
    return 0;
}