#include <stdio.h>

int main(void)
{
    int dan;

    puts("正方形を作ります。");
    printf("何段ですか："); scanf("%d", &dan);
    
    for(int i = 1; i <= dan; i++){
        for(int j = 1; j <= dan; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}