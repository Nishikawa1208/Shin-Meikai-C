#include <stdio.h>

int main(void)
{
    int n;
    int t, r;

    printf("参加するチーム数を入力してください: ");
    scanf("%d", &n);

    t = n - 1;

    r = (n * (n - 1)) / 2;

    printf("ノックアウト方式の総試合数: %d\n", t);
    printf("総当たり方式の総試合数: %d\n", r);

    return 0;
}
