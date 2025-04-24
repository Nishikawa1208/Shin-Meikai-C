#include <stdio.h>

int main(void)
{
    int d, w;

    printf("2024年4月の日付を入力してください："); scanf("%d", &d);

    w = d % 7;

    printf("曜日は%dです。", w);

    return 0;
}