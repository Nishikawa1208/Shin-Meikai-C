#include <stdio.h>

int main(void)
{ 
    double d, r;

    printf("角の大きさ(degree)を入力してください："); scanf("%lf", &d);

    r = (3.141592 * d) / 180;

    printf("弧度に変換すると%lfラジアンです。", r);

    return 0;
}