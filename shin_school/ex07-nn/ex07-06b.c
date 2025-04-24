#include <stdio.h>

int main(void)
{
    int n1, n2, i, l, s, r;

    printf("正の整数aを入力してください："); scanf("%d", &n1);
    printf("正の整数bを入力してください："); scanf("%d", &n2);

    if(n1 > n2){
        l = n1;
        s = n2;
    }else{
        l = n2;
        s = n1;
    }

    while(s != 0){

        r = l % s;
        l = s;
        s = r;
    }

    printf("最大公約数は%dです。", l);
    
    return 0;
}