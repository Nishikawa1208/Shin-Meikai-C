#include <stdio.h>

int main(void)
{
    int d;

    printf("日にちを入力してください："); scanf("%d", &d);

    if((d > 30) || (d < 1)){
        puts("不正な日にちです。");

        return 0;
    }

    switch((d + 5)% 7){
        case 0 : puts("Sunday");    break;
        case 1 : puts("Monday");    break;
        case 2 : puts("Tuesday");   break;
        case 3 : puts("Wednesday"); break;
        case 4 : puts("Thursday");  break;
        case 5 : puts("Friday");    break;
        default : puts("Saturday"); break;
    }

    return 0;
}