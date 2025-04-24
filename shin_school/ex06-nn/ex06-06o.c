#include <stdio.h>

int main(void)
{
    int n, i = 0;

    printf("正の整数を入力してください：");   scanf("%d", &n);

    while(1 <= n){

        n /= 8;

        i++;
    }

    printf("その数は八進数で%d桁です。", i);

    return 0;
}