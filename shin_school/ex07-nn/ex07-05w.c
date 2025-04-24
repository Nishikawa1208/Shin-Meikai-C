#include <stdio.h>

int main(void)
{
    int n1, n2, i, m, j = 0;

    printf("正の整数aを入力してください："); scanf("%d", &n1);
    printf("正の整数bを入力してください："); scanf("%d", &n2);

    if(n1 > n2){
        m = n1;
        n1 = n2;
        n2 = m;
    }

    i = 1;

    while(i <= n1){

        if((n1 % i == 0) && (n2 % i == 0)){

            j++;
        }

        i++;
    }

    printf("その2数の公約数の数は%d個です。", j);
    
    return 0;
}