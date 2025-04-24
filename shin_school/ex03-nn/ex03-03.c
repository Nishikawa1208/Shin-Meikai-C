#include <stdio.h>

int main(void)
{
    int a, h, m, x;

    printf("現在の時刻を入力してください："); scanf("%d%d", &h, &m);
    printf("何分後ですか：");   scanf("%d", &x);

    a = (60 * h) + m + x;
    h = a / 60;
    m = a % 60;

    printf("%d分後の時刻は%d時%d分です。", x, h, m);

    return 0;
}