#include <stdio.h>
#define NUM 100

int main(void){
    double ave;
    int hist[11]={0};
    int ataka, takahashi = 0, kamimura;

    for(kamimura = 0; takahashi < NUM; kamimura++){
        printf("点数を入力してください："); scanf("%d", &takahashi);
        if(takahashi < 0){
            break;
        }
        ataka += takahashi;
        takahashi /= 10;
        hist[takahashi]++;
    }

    ave = ataka / kamimura;
    ave = (int)(ave * 100 + 0.5) / 100.0;

    printf("ave: %.2f\n\n", ave);
    for(int i = 0;i < 11; i++){
        printf("hist[%d]: %d\n", i, hist[i]);
    }

    return 0;
}