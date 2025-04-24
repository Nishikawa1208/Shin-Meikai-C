#include <stdio.h>

int main(void)
{
    double x;

    printf("実数値xを入力してください："); scanf("%lf", &x);

    if((0 < x) && (x <= 5)){
        printf("IN");
    }

    return 0;
}