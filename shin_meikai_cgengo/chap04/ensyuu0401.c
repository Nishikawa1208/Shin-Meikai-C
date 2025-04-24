//読み込んだ整数値の符号を判定

#include <stdio.h>

int main(void)
{
    int zokkou;
    
    do{
        int no;

        printf("整数を入力せよ：");
        scanf("%d", &no);

        if(no < 0)
            puts("その数は負です。");
        else if(no == 0)
            puts("その数は0です。");
        else
            puts("その数は正です。");
        
        printf("続行しますか？【Yes...0/No...9】：");
        scanf("%d", &zokkou);
    }while(zokkou == 0);

    return 0;
}