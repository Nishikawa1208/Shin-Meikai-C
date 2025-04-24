#include <stdio.h>

int main(void)
{
    int z;
    double x, y;

    printf("実数値を入力してください："); scanf("%lf", &x);

    if(x < 0){
        y = x;
        y *= 10;
        z = y - 0.5;
        y = z / 10.0;

        printf("%lfを四捨五入した値は%lfです。", x, y);

    }else if(x == 0){
        puts("ゼロを入力しないでください。");
    }else{
        y = x;
        y *= 10;
        z = y + 0.5;
        y = z / 10.0;

        printf("%lfを四捨五入した値は%lfです。", x, y);
    }

    return 0;
}