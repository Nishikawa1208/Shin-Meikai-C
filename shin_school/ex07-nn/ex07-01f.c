#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("正の整数を入力してください："); scanf("%d", &n);

    for(i = 1; i <= 9; i++){

        printf("%d ", i * n);
    }
    return 0;
}