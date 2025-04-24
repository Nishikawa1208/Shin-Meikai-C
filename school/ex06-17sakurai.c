#include <stdio.h>

int main(void) {
    int n;
    int count_d = 0;
    int count_b = 0;
    int count_o = 0;
    int count_h = 0;
    int temp;

    printf("10進数の整数を入力してください: ");
    scanf("%d", &n);

    // 10
    if (n == 0) {
        count_d = 1;
    } else {
        temp = n;
        while (temp != 0) {
            temp = temp / 10;
            ++count_d;
        }
    }

    // 2
    if (n == 0) {
        count_b = 1;
    } else {
        temp = n;
        while (temp != 0) {
            temp = temp / 2;
            ++count_b;
        }
    }

    // 8
    if (n == 0) {
        count_o = 1;
    } else {
        temp = n;
        while (temp != 0) {
            temp = temp / 8;
            ++count_o;
        }
    }

    // 16
    if (n == 0) {
        count_h = 1;
    } else {
        temp = n;
        while (temp != 0) {
            temp = temp / 16;
            ++count_h;
        }
    }

    printf("%dは10進数で%d桁です。\n", n, count_d);
    printf("%dは2進数で%d桁です。\n", n, count_b);
    printf("%dは8進数で%d桁です。\n", n, count_o);
    printf("%dは16進数で%d桁です。\n", n, count_h);

    return 0;
}