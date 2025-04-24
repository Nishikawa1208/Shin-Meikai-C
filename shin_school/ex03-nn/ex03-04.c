#include <stdio.h>

int main(void)
{
    int n, c;

    printf("人数を入力してください："); scanf("%d", &n);

    c = (n + 3) / 4;

    printf("必要なタクシーの台数は%d台です。", c);

    return 0;
}