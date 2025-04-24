#include <stdio.h>

int main(void)
{
    int no, i = 0;

    do{
        printf("正の整数を入力せよ：");
        scanf("%d", &no);
        if(no <=0)
            puts("\a正でない数を入力しないでください。");
    }while(no <= 0);

    printf("%dは", no);
    while(no > 0){
        i++;
        no /= 10;
    }
    printf("%d桁です。", i);
    return 0;
}