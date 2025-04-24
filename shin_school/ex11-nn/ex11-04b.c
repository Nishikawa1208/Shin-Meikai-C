#include <stdio.h>
#define NUM 50

int main(void){
    int i, j;
    int d[NUM]={0};

    for(i = 0; i < NUM; i++){
        scanf("%d", &d[i]);
    }

    for(i = 0; i < NUM - 1; i++){
        for(j = NUM - 1; j > i; j--){
            if(d[j-1] > d[j]){
                int tmp = 0;
                tmp = d[j-1];
                d[j-1] = d[j];
                d[j] = tmp;
            }
        }
    }
    for(i = 0; i < NUM; i++){
        printf("%3d:%3d\n", i + 1, d[i]);
    }

    return 0;
}