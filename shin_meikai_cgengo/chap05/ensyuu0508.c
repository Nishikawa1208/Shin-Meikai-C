#include <stdio.h>

#define NUMBER 120

int main(void) {
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("人数を入力せよ：");

    do {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER)
            printf("\a1~%dで入力せよ：", NUMBER);
    } while(num < 1 || num > NUMBER);
    // 人数入力が完了 (0~120)
    printf("%d人の点数を入力せよ。\n", num);

    for(int i = 0; i < num; i++) {
        printf("%2d番：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if(tensu[i] < 0 || tensu[i] > 100)
                printf("\a0~100で入力せよ：");
        } while(tensu[i] < 0 || tensu[i] > 100); // 0点~100点の間
        bunpu[tensu[i] / 10]++;
    }

    puts("\n---縦方向の分布グラフ---");

    // 最大の星の数を求める
    int max_stars = 0;
    for(int i = 0; i < 11; i++) {
        if(bunpu[i] > max_stars) {
            max_stars = bunpu[i];
        }
    }

    // 縦方向に表示するために、上から最大の星の数まで表示する
    for(int row = max_stars; row > 0; row--) {
        for(int i = 0; i < 10; i++) {
            if(bunpu[i] >= row) {
                printf("    *    ");
            } else {
                printf("         ");
            }
        }
        if(bunpu[10] >= row) {
            printf("    *    ");
        } else {
            printf("         ");
        }
        printf("\n");
    }

    // 下の部分に範囲を表示
    for(int i = 0; i < 10; i++) {
        printf("%3d~%3d", i * 10, i * 10 + 9);
        if (i != 9) printf("  ");
    }
    printf("   100\n");

    return 0;
}
