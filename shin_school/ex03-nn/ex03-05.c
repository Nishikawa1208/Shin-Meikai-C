#include <stdio.h>

int main(void)
{
    int m, b;

    printf("ボールの個数を入力してください："); scanf("%d", &m);

    b = (m + 11) / 12;

    printf("必要な箱の数は%d箱です。", b);

    return 0;
}