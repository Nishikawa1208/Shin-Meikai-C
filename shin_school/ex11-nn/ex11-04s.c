#include <stdio.h>
#define NUM 50

int main(void){
    int i, j, m;
    int d[NUM]={0};

    for(i = 0; i < NUM; i++){
        scanf("%d", &d[i]);
    }

    for(i = 0; i < NUM - 1; i++){
        m = i;
        for(j = i + 1; j < NUM; j++){
            if(d[m] > d[j]){
                m = j;
            }
        }
        int tmp = 0;
        tmp = d[i];
        d[i] = d[m];
        d[m] = tmp;
    }
    for(i = 0; i < NUM; i++){
        printf("%3d:%3d\n", i + 1, d[i]);
    }

    return 0;
}