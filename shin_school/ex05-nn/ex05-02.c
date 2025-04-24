#include <stdio.h>

int main(void)
{
    int m;

    printf("月を入力してください："); scanf("%d", &m);

    if((m > 12) || (m < 1)){
        puts("不正な月です。");
        
        return 0;
    }

    switch(m){
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : puts("最終日は31日です。");   break;
        case 2 : puts ("最終日は29日です。");   break;
        default : puts("最終日は30日です。");   break;
    }

    return 0;
}