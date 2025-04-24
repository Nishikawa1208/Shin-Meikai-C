#include <stdio.h>

int main(void)
{
    int i, s = 0, t, max = 0, min = 0;
    double a;

    for (i = 0; 1; i++){

        printf("点数を正の整数で入力してください：");   scanf("%d", &t);

        if(t < 0){
            break;
        }
        s += t;

        if(max < t){
            max = t;
        }
        if(min > t){
            min = t;
        }
    }

    a = (double)s / i;

    printf("%d人の平均点は%.2lf点で、最高点は%d点、最低点は%d点です。", i, a, max, min);

    return 0;
}