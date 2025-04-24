#include <stdio.h>

int main(void)
{
    int n;

    while(1){

        printf("整数を入力してください(0以下の数が入力されたら終了)：");    scanf("%d", &n);

        if(n <= 0){
            break;
        }
        if(n % 2 == 0){
            printf("Even");
        }else{
            printf("Odd");
        }

        putchar('\n');
    }

    return 0;
}