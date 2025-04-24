#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("正の整数を入力してください："); scanf("%d", &n);

    while(i <= 9){

        printf("%d ", i * n);

        i++;
    }

    return 0;
}