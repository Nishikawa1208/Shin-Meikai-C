#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数：");
    scanf("%d", &no);

    if(no > 0){

    while(no-- > 0){
        if((no % 2) == 0)
            putchar('+');
        else
            putchar('-');
    }

    putchar('\n');

    }

    return 0;
}