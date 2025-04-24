#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("整数値xを入力してください："); scanf("%d", &x);
    printf("整数値yを入力してください："); scanf("%d", &y);
    printf("整数値zを入力してください："); scanf("%d", &z);

    if(x > y){
        x = y;
    }
    
    if(x > z){
        x = z;
    }

    printf("最小値は%dです。", x);

    return 0;
}