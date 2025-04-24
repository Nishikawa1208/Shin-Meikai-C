#include <stdio.h>

int main(void)
{
    int i, m, n, s = 0;

    printf("mの値を入力してください：");    scanf("%d", &m);
    printf("nの値を入力してください：");    scanf("%d", &n);

    i = m;
    
    while(i <= n){
        s = s + i;
        i = i + 1;
    }

    printf("%d", s);

    return 0;
}