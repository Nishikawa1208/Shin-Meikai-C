#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("正の整数を入力してください：");   scanf("%d", &n);

    while(i <= n){

        if(i % 5){
            putchar('-');
        }else{
            putchar('+');
        }
        i++;
    }

    return 0;
}