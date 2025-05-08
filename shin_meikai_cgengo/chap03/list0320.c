//読み込んだ整数値を3で割った剰余を表示(switch文)

#include <stdio.h>

int main(void)
{
    int no;

    printf("整数値：");
    scanf("%d", &no);

    switch (no % 3){    //no % 3が
    case 0 : puts("3で割り切れます。");     break;  //0であれば...
    case 1 : puts("3で割った剰余は1です。");    break;  //1であれば...
    case 2 : puts("3で割った剰余は2です。");    break;  //2であれば...
    }
        
    return 0;
}