#include <stdio.h>

int main(void)
{
    int d;

    printf("平成の年を和暦で入力してください：");   scanf("%d", &d);

    switch(d % 12){
        case 0: printf("辰");   break;
        case 1: printf("巳");   break;
        case 2: printf("午");   break;
        case 3: printf("未");   break;
        case 4: printf("申");   break;
        case 5: printf("酉");   break;
        case 6: printf("戌");   break;
        case 7: printf("亥");   break;
        case 8: printf("子");   break;
        case 9: printf("丑");   break;
        case 10: printf("寅");  break;
        case 11: printf("卯");  break;
    }

    return 0;
}