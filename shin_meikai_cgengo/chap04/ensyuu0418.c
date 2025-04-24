//読み込んだ整数の個数だけaを連続表示(for文)

#include <stdio.h>

int main(void)
{
    int no;

    printf("何個aを表示しますか：");
    scanf("%d",&no);

    for(int i = 1; i <= no; i++){
        putchar('a');
        if(i % 5 == 0){
            putchar('\n');
        }
    }
    putchar('\n');

    return 0;
}