#include <stdio.h>

int main(void)
{
    int a, b;

    printf("整数aを入力してください：");    scanf("%d", &a);
    printf("整数bを入力してください：");    scanf("%d", &b);

    if(((a % 2) == 1) && ((b % 2) == 1)){
        puts("Odd");
    }else if(((a % 2) == 0) && ((b % 2) == 0)){
        puts("Even");
    }else{
        puts("Other");
    }

    return 0;
}