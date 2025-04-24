#include <stdio.h>

int main(void)
{
    double a, b, c;

    printf("二次方程式(a*x^2+b*x+c=0)の係数aを入力してください："); scanf("%lf", &a);
    printf("二次方程式(a*x^2+b*x+c=0)の係数bを入力してください："); scanf("%lf", &b);
    printf("二次方程式(a*x^2+b*x+c=0)の係数cを入力してください："); scanf("%lf", &c);

    if(((b * b) - (4 * a * c)) == 0){
        puts("0");
    }else if(((b * b) - (4 * a * c)) > 0){
        puts("1");
    }else{
        puts("-1");
    }

    return 0;
}