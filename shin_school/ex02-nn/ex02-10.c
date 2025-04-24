#include <stdio.h>

int main(void)
{
    int c, y;

    printf("西暦を入力してください："); scanf("%d", &y);

    c = (y + 99) / 100;

    printf("西暦%d年は%d世紀です。", y, c);

    return 0;
}