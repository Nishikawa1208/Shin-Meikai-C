#include <stdio.h>

int main(void)
{
    int x, y, z, i;

    printf("整数値xを入力してください："); scanf("%d", &x);
    printf("整数値yを入力してください："); scanf("%d", &y);
    printf("整数値zを入力してください："); scanf("%d", &z);

    if(x > y){
        i = x;
        x = y;
        y = i;
    }
    
    if(y > z){
        i = y;
        y = z;
        z = i;
    }

    if(z > x){
        i = z;
        z = x;
        x = i;
    }
    printf("小さい数から順に%d、%d、%dです。", z, y, x);

    return 0;
}