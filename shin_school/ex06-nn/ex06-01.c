#include <stdio.h>

int main(void)
{
    int d;

    printf("月の最終日を入力してください：");   scanf("%d", &d);

    if((d == 28) || (d == 29)){
        printf("February");
    }else if(d == 30){
        printf("April\n");
        printf("June\n");
        printf("September\n");
        printf("November\n");
    }else if(d == 31){
        printf("January\n");
        printf("March\n");
        printf("May\n");
        printf("July\n");
        printf("August\n");
        printf("October\n");
        printf("December\n");
    }else{
        printf("存在しない月を入力しないでください！");
    }

    return 0;
}