//読み込んだ月の季節を表示

#include <stdio.h>

int main(void)
{
    int month;  //月

    printf("何月ですか：");
    scanf("%d", &month);

    switch(month){
        case 12:
        case 1:
        case 2:printf("%d月は冬です。\n", month);    break;
        case 3:
        case 4:
        case 5:printf("%d月は春です。\n", month);   break;
        case 6:
        case 7:
        case 8:printf("%d月は夏です。\n", month);   break;
        case 9:
        case 10:
        case 11:printf("%d月は秋です。\n", month);  break;
        default:printf("%d月はありませんよ!!\a\n", month);  break;
    }

    return 0;
}