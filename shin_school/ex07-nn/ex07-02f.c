#include <stdio.h>

int main(void)
{
    int n1, n2, i, m, j = 0;

    printf("正の整数n1を入力してください："); scanf("%d", &n1);
    printf("正の整数n2を入力してください："); scanf("%d", &n2);

    if(n1 > n2){
        m = n1;
        n1 = n2;
        n2 = m;
    }

    for(i = n1; i <= n2; i++){

        if(i % 7 == 0){
            j++;
        }
    }

    printf("その2数の閉区間にある7の倍数の数は%d個です。", j);
    
    return 0;
}