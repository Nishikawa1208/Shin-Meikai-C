#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("三つの整数を入力せよ。");
    printf("整数1：");  scanf("%d", &n1);
    printf("整数2：");  scanf("%d", &n2);
    printf("整数3：");  scanf("%d", &n3);

    if(n1 > n2)
        n1 = n2;
    if(n1 > n3)
        n1 = n3;

    printf("最小値は%dです、\n", n1);

    return 0;
}