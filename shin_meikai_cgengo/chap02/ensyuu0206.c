//身長と整数値として読み込んで、標準体重を実数で表示するプログラム

#include <stdio.h>

int main(void)
{
    int x;

    puts("身長を入力せよ");
    printf("身長：");  scanf("%d", &x);
    printf("あなたの身長における標準体重は%fkgです。\n", (x - 100) * 0.9);

    return 0;
}