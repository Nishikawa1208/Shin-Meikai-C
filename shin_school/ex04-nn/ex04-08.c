#include <stdio.h>

int main(void)
{
    double x;

    printf("実数値xを入力してください："); scanf("%lf", &x);

    if((x <= 0) || (x > 5)){
        printf("OUT");
    }

    return 0;
}