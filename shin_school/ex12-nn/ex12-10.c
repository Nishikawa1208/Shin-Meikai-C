#include <stdio.h>

int num_of_roots(double a, double b, double c){
    int judge;
    if(((b*b) - (4 * a * c)) == 0){
        judge = 1;
    }else if(((b*b) - (4 * a * c)) < 0){
        judge = 0;
    }else if(((b*b) - (4 * a * c)) > 0){
        judge = 2;
    }
    return judge;
}

int main(void){

    double a, b, c;
    printf("a:");   scanf("%lf", &a);
    printf("b:");   scanf("%lf", &b);
    printf("c:");   scanf("%lf", &c);

    printf("point:%d", num_of_roots(a, b, c));

    return 0;
}