#include <stdio.h>

int main(void)
{
    int i, m, n, s = 0;

    printf("mの値を入力してください：");    scanf("%d", &m);
    printf("nの値を入力してください：");    scanf("%d", &n);

    i = m;
    
    do{
        s = s + i;
        i = i + 1;
    }while(i <= n);

    printf("%d", s);

    return 0;
}