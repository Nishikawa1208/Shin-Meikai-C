//読み込んだ月の季節を表示

#include <stdio.h>

int main(void)
{
    int month;  //月

    printf("何月ですか：");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
        printf("%d月は春です。\n", month);  //春：3以上かつ5以下
    else if (month >= 6 && month <= 8)
        printf("%d月は夏です。\n", month);  //夏：６以上かつ8以下
    else if (month >= 9 && month <= 11)
        printf("%d月は秋です。\n", month);  //あき：9以上かつ11以下
    else if (month == 1 || month == 2 || month == 12)   //冬：1または2または12
        printf("%d月は冬です。\n", month);
    else 
        printf("%d月はありませんよ!!\a\n", month);
        
    return 0;
}