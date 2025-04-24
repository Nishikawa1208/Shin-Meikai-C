#include <stdio.h>

int main(void)
{
    int p, y1000;

    printf("買い物の金額を入力してください："); scanf("%d", &p);

    y1000 = (p + 999) / 1000;

    printf("必要な1000円札の枚数は%d枚です。", y1000);

    return 0;
}