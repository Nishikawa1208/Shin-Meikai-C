#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数を入力せよ：");
    scanf("%d", &no);

    if(no % 2 != 0)
        no - 1;
    int i = 2;
    while(i <= no){
        printf("%d ", i);
        i = i * 2;
    }
    printf("\n");

    return 0;
}