#include <stdio.h>

int main(void)
{
    int s, t;
    double x, y;

    printf("実数値xを入力してください："); scanf("%lf", &x);
    printf("実数値yを入力してください："); scanf("%lf", &y);

    if(x > 0){
        s = 1;
    }else if(x == 0){
        s = 0;
    }else{
        s = -1;
    }
    
    if(y > 0){
        t = 1;
    }else if(y == 0){
        t = 0;
    }else{
        t = -1;
    }

    if(s == 0 || t == 0){
        printf("0");
    }else if(s == t){
        printf("1");
    }else{
        printf("-1");
    }

    return 0;
}