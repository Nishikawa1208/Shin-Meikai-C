//二つの整数値を読み込んで、小さいほうの数以上で大きい方の数以下の全整数を加えた値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
    int n1, n2, sum = 0, a, b;

    puts("二つの整数を入力せよ。");
    printf("整数a：");  scanf("%d", &n1);
    printf("整数b：");  scanf("%d", &n2);

    if(n1 < n2){
        a = n1; n1 = n2; n2 = a;
    }

    b = n1;

    do{
        sum = sum + n1;
        n1 = (n1 - 1);
    }while(!(n1 < n2));

    printf("%d以上%d以下の全整数の和は%dです。\n", n2, b, sum);

    return 0;
}