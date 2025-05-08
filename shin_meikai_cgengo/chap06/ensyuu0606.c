#include <stdio.h>

void put_chars(int n)
{
    while(n-- > 0)
        putchar('\a');
}

int main(void)
{
    int len;

    printf("アラームを鳴らします\n");
    printf("回数：");
    scanf("%d", &len);

    put_chars(len);

    return 0;
}