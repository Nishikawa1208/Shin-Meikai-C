//文字列の配列を読み込んで表示

#include <stdio.h>

#define NUM 3

int main(void){
    char s[NUM][128];

    for(int i = 0; i < NUM; i++){
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
    }

    for(int i = 0; i < NUM; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    
    return 0;
}