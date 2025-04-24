#include <stdio.h>

int main(void)
{
    int i, s = 0, t;
    double a;

    for (i = 0; 1; i++){

        printf("点数を正の整数で入力してください：");   scanf("%d", &t);

        if(t < 0){
            break;
        }
        s += t;
    }

    a = (double)s / i;

    printf("%d人の平均点は%.2lf点です。", i, a);

    return 0;
}