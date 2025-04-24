#include <stdio.h>

unsigned long summation(unsigned long n) {
    if (n == 0) {
        return 0;  // 再帰終了条件
    } else {
        return (n + summation(n - 1));  // 再帰呼び出し
    }
}

int main(void) {
    unsigned long n;

    printf("n: ");   
    scanf("%ld", &n);
    printf("%ld\n", summation(n));

    return 0;
}