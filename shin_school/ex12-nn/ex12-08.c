#include <stdio.h>

int quadrant(double x, double y){
    int judge;
    if((x == 0)||(y == 0)){
        judge = 0;
    }else if((x > 0)&&(y > 0)){
        judge = 1;
    }else if((x < 0)&&(y > 0)){
        judge = 2;
    }else if((x < 0)&&(y < 0)){
        judge = 3;
    }else if((x > 0)&&(y < 0)){
        judge = 4;
    }

    return judge;
}

int main(void){
    double x, y;

    printf("x:");   scanf("%lf", &x);
    printf("y:");   scanf("%lf", &y);

    printf("%d", quadrant(x, y));

    return 0;
}