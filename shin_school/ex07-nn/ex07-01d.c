#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("正の整数を入力してください："); scanf("%d", &n);

    do{

        printf("%d ", i * n);

        i++;
    }while(i <= 9);

    return 0;
}