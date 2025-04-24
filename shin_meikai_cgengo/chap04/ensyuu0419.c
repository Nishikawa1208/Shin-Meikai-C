//読み込んだ整数値の全約数を表示

#include <stdio.h>

int main(void)
{
    int n, j = 0;

    printf("整数値：");
    scanf("%d", &n);

    for(int i = 1; i <= n; i ++)
        if(n % i == 0){
            printf("%d ", i);
            putchar('\n');
            j++;
        }
    printf("約数は%d個です。\n", j);

    return 0;
}