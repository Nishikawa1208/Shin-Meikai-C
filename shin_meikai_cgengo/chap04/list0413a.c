//読み込んだ整数の個数だけaを連続表示(for文)

#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数：");
    scanf("%d",&no);

    for(int i = 0; i < no; i++)
        putchar('a');
    putchar('\n');

    return 0;
}