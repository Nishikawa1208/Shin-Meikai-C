#include <stdio.h>

int main(void)
{
    int n, i, m, j;

    printf("正の整数を入力してください："); scanf("%d", &n);

    for(i = n; i >= 1; i--){

        for(j = 1; j <= i; j++){
            putchar('+');
        }

        for(j = 0; j <= (n - i); j++){
            putchar('-');
        }

        putchar('\n');
    }

    return 0;
}