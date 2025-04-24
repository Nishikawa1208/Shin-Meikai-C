#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("二つの整数を入力せよ。\n");

    printf("整数A：");  scanf("%d", &n1);
    printf("整数B：");  scanf("%d", &n2);

    if(n1 % n2)
        printf("BはAの約数ではありません。");
    else
        printf("BはAの約数です。");

    return 0;    
}