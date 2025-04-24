#include <stdio.h>

int main(void)
{
    int n, i = 1, j = -1, k;

    printf("正の整数を入力してください：");   scanf("%d", &n);

    while(i <= n){

        j = (-j);

        k = j * i;


        printf("%d\n", k);

        i++;

    }

    return 0;
}