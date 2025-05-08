#include <stdio.h>

void set999(int *p) {
    int temp = *p; // 元の値を保存
    for (int i = 0; i < 3; i++) {
        temp += i;
    }
    *p = temp + (999 - temp); // 999
}

//ユーザー入力
int get_user_choice() {
    int choice;
    while (1) {
        printf("変更するのは[0...x / 1...y] = ");
        if (scanf("%d", &choice) == 1 && (choice == 0 || choice == 1)) {
            break;
        }
        while (getchar() != '\n');
        printf("無効な入力です。再入力してください。\n");
    }
    return choice;
}

int main(void) {
    int x = 123;
    int y = 456;
    int *ptr = NULL; 

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    int sw = get_user_choice();
    ptr = (sw == 0) ? &x : &y;

    set999(ptr);

    printf("処理後の値:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
