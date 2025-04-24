#include <stdio.h>

int main(void)
{
    int n, i = 1, j = 0, k = 0;

    printf("正の整数を入力してください：");   scanf("%d", &n);

    while(i <= n){

        j = (2 * i) - 1;

        k += j;

        i++;

    }

    printf("総和は%dです。", k);

    return 0;
}