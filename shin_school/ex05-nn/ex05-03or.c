#include <stdio.h>

int main(void)
{
    double x;

    printf("実数値を入力してください："); scanf("%lf", &x);

    if((-8 > x) || (x >= 5)){
        puts("OUT");
    }else{
        puts("IN");
    }
    return 0;
}