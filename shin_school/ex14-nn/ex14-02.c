#include <stdio.h>

void calctime(int *h, int *m, int *s, int t){
    *m = t/60;
    *s = t%60;
}

int main(void){
    int o, p, q, r, s;
    do{
        printf("数字を入力してください。\n");
        scanf("%d", &s);
    }while(s >= 0);//TODO!削除

    return 0;
}