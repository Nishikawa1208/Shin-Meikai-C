#include <stdio.h>

int main(void)
{
    int n1, n2, n3, i, m, j = 0;

    printf("正の整数n1を入力してください："); scanf("%d", &n1);
    printf("正の整数n2を入力してください："); scanf("%d", &n2);
    printf("正の整数n3を入力してください："); scanf("%d", &n3);

    m = n1;

    if(m > n2){
        m = n2;
    }
    if(m > n3){
        m = n3;
    }

    i = 1;

    do{

        if((n1 % i == 0) && (n2 % i == 0) && (n3 % i == 0)){

            printf("%d ", i);

            j++;
        }

        i++;
    }while(i <= m);

    printf("その3数の公約数の数は%d個です。", j);
    
    return 0;
}