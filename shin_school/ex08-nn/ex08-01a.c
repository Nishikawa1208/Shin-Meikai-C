#include <stdio.h>

int main(void)
{
    int n, i, m, j = 0;

    printf("正の整数を入力してください："); scanf("%d", &n);

    for(i = 1; i <= n; i++){

        for(j = 1; j <= n; j++){

            printf("%d ", i * j);
        }

        putchar('\n');
    }

    return 0;
}