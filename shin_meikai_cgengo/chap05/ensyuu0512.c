//4人の学生の3科目のテスト2回分の合計を求めて表示

#include <stdio.h>

int main(void)
{
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[4][3] = {{0}};  //合計

    //2回分の点数の合計を求める
    for(int k = 0; k < 2; k++){
        for(int i = 0; i < 4; i++){             //4人分の
            for(int j = 0; j < 3; j++)          //3科目の
                sum[i][j] += tensu[k][i][j];    //2回分を加算
        }
    }
    
    //n回目の点数を表示
    for(int k = 0; k < 2; k++){
        printf("%d回目の点数\n", k + 1);
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 3; j++)
                printf("%4d", tensu[k][i][j]);
                putchar('\n');
            }
    }
    //合計点を表示
    puts("合計点");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }

    return 0;
}

