#include <stdio.h>

int sumup(int n)
{
    int sum = 0;
    
    for(int i = 0; i <= n; i++){
        sum += i;
    }

    return sum;
}

int main(void)
{
    int a;

    printf("1からnまでの全整数の和を求めます\n");
    printf("整数：");  scanf("%d", &a);

    printf("1から%dまでの全整数の和は%dです。\n", a, sumup(a));

    return 0;
}