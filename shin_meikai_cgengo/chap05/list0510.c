//学生の点数を読み込んで合計点と平均点を表示(人数をマクロで定義)

#include <stdio.h>

#define NUMBER 10

int main(void)
{
    int tensu[NUMBER];
    int sum = 0;

    printf("%d人の点数を入力せよ。\n", NUMBER);
    for(int i = 0; i < NUMBER; i++){
        printf("%2d番：", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("合計点：%5d\n", sum);
    printf("平均点：%5.1f\n", (double)sum / NUMBER);

    return 0;
}