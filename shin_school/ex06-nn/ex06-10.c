#include <stdio.h>

int main(void)
{
    int n, i = 1, k = 0;

    printf("正の整数を入力してください：");   scanf("%d", &n);

    while(i <= n){

        if((n % i) == 0){
            printf("%d ", i);

            k++;
        }
        i++;
    }

    printf("約数の個数は%d個です。", k);

    return 0;
}