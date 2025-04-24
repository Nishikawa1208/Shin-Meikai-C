#include <stdio.h>

int main(void)
{
    double x;

    printf("実数値を入力してください："); scanf("%lf", &x);

    if(x == 0){
        printf("ゼロを入力しないでください。");
    }

    printf("%lfの逆数は%lfです。", x, 1 / x);

    return 0;
}