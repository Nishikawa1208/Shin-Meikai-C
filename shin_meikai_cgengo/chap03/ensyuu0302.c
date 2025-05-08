//読み込んだ整数値の符号を判定

#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力せよ： ");
    scanf("%d", &no);

    if(no == 0)
        puts("その数は0です。");
    else if(no < 0)
        puts("その数は負です。");
    else
        puts("その数は正です。");

    return 0;
}