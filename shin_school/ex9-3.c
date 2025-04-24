#include <stdio.h>
#include <string.h>

#define STR_COUNT 10  // 文字列の個数(>3)

int main(void) {
    char s[STR_COUNT][128];
    int i;

    //中断
    for (i = 0; i < STR_COUNT; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (strcmp(s[i], "$$$$$") == 0)
            break;
    }

    //$$$$$より前に入力された文字列だけ表示
    for (int j = 0; j < i; j++) {
        printf("s[%d] = \"%s\"\n", j, s[j]);
    }

    return 0;
}