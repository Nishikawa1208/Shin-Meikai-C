#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数を入力せよ：");
    scanf("%d", &no);

    int i = 1;
    if(no > 0){
    while(i <= no)
        printf("%d ", i++);    //iの値を表示した後にインクリメント
    printf("\n");   //改行
    }
    
    return 0;
}