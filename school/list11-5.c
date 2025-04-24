#include <stdio.h>

int str_length(const char *s)
{
    int len = 0;
    while (*s++)
        len++;
    return len;
}

int str_chnum(const char *s, int c) {
    int count = 0;
    while (*s != '\0') {
        if (*s == (char)c) {
            count++;
        }
        s++;
    }
    return count;
}

const char *str_chr(const char *s, int c) {
    while (*s != '\0') {
        if (*s == (char)c) {
            return s;
        }
        s++;
    }
    return NULL;
}

int main(void)
{
    int c;
    char str[128];
    const char *first_p;

    printf("文字列を入力せよ: ");
    scanf("%s", str);  // 文字列の入力

    printf("調べる文字を1文字入力せよ: ");
    scanf(" %c", (char *)&c);  // 改行なす

    printf("文字列 \"%s\" の長さは %d です。\n", str, str_length(str));
    printf("この文字列に含まれている '%c' の個数は %d 個です。\n", c, str_chnum(str, c));

    first_p = str_chr(str, c);
    if (first_p != NULL) {
        printf("最初に出現する位置の文字列は \"%s\" です。\n", first_p);
    } else {
        printf("文字 '%c' は文字列に含まれていません。\n", c);
    }

    return 0;
}