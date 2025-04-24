#include <stdio.h>

int main(void)
{
    double x;

    printf("実数値を入力してください："); scanf("%lf", &x);

    if(x >= 0){
        printf("%lfの絶対値は%lfです。", x, x);
    }else{
        printf("%lfの絶対値は%lfです。", x, x * (-1));
    }

    return 0;
}