#include <stdio.h>

/* 時間差を計算する関数 */
int timeDiff(int a[], int b[], int *c) {
    int d;
    d = (a[0] * 3600) + (a[1] * 60) + (a[2]) - (b[0] * 3600) - (b[1] * 60) - (b[2]);
    if(d == 0){
        c[0] = 0;
        c[1] = 0;
        c[2] = 0;
        return 0;
    }
    if(d < 0){
        d *= -1;
        c[0] = d / 3600;
        c[1] = (d - (c[0] * 3600)) / 60;
        c[2] = d % 60;
        return -1;
    }
    if(d > 0){
        c[0] = d / 3600;
        c[1] = (d - (c[0] * 3600)) / 60;
        c[2] = d % 60;
    }
    return 1;
}

/* 動作確認用のmain関数 */
int main() {
    int a[3], b[3],c[3];
    int result;
    
    /* ユーザーからの入力を受け取る */
    printf("時刻aを入力してください（時 分 秒）：");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    
    printf("時刻bを入力してください（時 分 秒）：");
    scanf("%d %d %d", &b[0], &b[1], &b[2]);
    
    result = timeDiff(a, b, c);

    /* 結果を出力 */
    printf("時差: %d時 %d分 %d秒\n", c[0], c[1], c[2]);
    printf("進み具合: ");
    if (result == 1) {
        printf("aの方が進んでいます\n");
    } else if (result == -1) {
        printf("bの方が進んでいます\n");
    } else {
        printf("両方同じ時刻です\n");
    }

    return 0;
}
