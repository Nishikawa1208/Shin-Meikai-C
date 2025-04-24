#include <stdio.h>
#define NUM 50

int main(void){
    int i, j, m, k = 0;
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
        k++;
    }
    for(i = 0; i < NUM; i++){
        printf("%3d:%3d\n", i + 1, d[i]);
    }
    printf("How many:%d\n", k);

    return 0;
}