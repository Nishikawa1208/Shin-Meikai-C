#include <stdio.h>

int main(void)
{
    int n;

    printf("nの値：");
    scanf("%d", &n);

    int sum = 0;    //合計値
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("1から%dまでの総和は%dです。\n", n, sum);

    return 0;
}