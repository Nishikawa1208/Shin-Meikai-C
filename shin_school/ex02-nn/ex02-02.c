#include <stdio.h>

int main(void)
{
    int x, y, f, i, j;

    printf("インチ数を入力してください："); scanf("%d", &x);

    j = x;
    y = x / 36;
    x = x - (y * 36);
    f = x / 12;
    i = x % 12;

    printf("%dインチは%dヤード%dフィート%dインチです。", j, y, f, i);

    return 0;
}