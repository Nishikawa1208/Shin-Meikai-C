#include <stdio.h>

int main(void)
{
    int s;
    double x;

    printf("実数値を入力してください："); scanf("%lf", &x);

    if(x > 0){
        s = 1;
    }else if(x == 0){
        s = 0;
    }else{
        s = -1;
    }
    printf("sの値は%dです。", s);

    return 0;
}