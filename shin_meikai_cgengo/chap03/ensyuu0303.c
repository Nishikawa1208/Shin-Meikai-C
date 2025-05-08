#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力せよ： ");
    scanf("%d", &no);

    if(no == 0)
        puts("絶対値は0です。");
    else if(no > 0)
        printf("絶対値は%dです。\n", no);
    else
        printf("絶対値は%dです。\n", -no);

    return 0;
}