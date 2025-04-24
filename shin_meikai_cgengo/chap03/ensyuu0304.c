#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数A：");  scanf("%d", &n1);
    printf("整数B：");  scanf("%d", &n2);

    if(n1 == n2)
        puts("AとBは等しいです。");
    else if(n1 > n2)
        puts("AはBより大きいです。");
    else
        puts("AはBより小さいです。");

    return 0;
}