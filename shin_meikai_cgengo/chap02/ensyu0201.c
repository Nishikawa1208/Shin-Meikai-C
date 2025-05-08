//二つの整数値を読み込んで、前者の値が後者の何%であるかを表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("整数n1を入力せよ：");
    scanf("%d", &n1);
    printf("整数n2を入力せよ：");
    scanf("%d", &n2);

    printf("n1はn2の%d%%です。\n", (100 * n1) / n2);
    
    return 0;
}