#include <stdio.h>

int main(void)
{
    int n;

    printf("正の整数を入力せよ：");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d", i % 10);
    }
    return 0;
}