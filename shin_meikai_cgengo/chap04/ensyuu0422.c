#include <stdio.h>

int main(void)
{
    int a, b, c;

    puts("横長の長方形を作ります。");
    printf("一辺(その1)："); scanf("%d", &a);
    printf("一辺(その2)："); scanf("%d", &b);

    if(a > b){
        c = a;
        a = b;
        b = c;
    }
    
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}