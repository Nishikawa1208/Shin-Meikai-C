#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("整数を入力してください");

    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);

    if(n1 == n2 && n1 == n3)
        printf("三つの値が等しいです。\n");
    else if(n1 == n2 || n1 == n3 || n2 == n3)
        printf("二つの値は等しいです。\n");
    else 
        printf("三つの値は異なります。\n");

    return 0;
}