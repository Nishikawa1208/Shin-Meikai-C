#include <stdio.h>

int main(void)
{
    int a;
    double x;

    printf("実数値を入力してください："); scanf("%lf", &x);

    if(x >= 0){

        a = x + 0.5;
        printf("%lfの小数点以下第一位を四捨五入すると%dです。", x, a);
    }else{

        a = x - 0.5;
        printf("%lfの小数点以下第一位を四捨五入すると%dです。", x, a);
    }

    return 0;
}