#include <stdio.h>
#include <string.h>

#define NUMBER      5   // 学生の人数
#define NAME_LEN    64  // 名前の最大文字数

//=== 学生を表す構造体 ===//
typedef struct {
    char    name[NAME_LEN]; // 名前
    int     height;         // 身長
    double  weight;         // 体重
} Student;

//xとyを交換
void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

//配列aを身長の順にソート
void sort_by_height(Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

//配列aを名前の順にソート
void sort_by_name(Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (strcmp(a[j - 1].name, a[j].name) > 0) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void) {
    Student std[NUMBER];

    //入力
    printf("学生のデータを入力してください（名前 身長 体重）：\n");
    for (int i = 0; i < NUMBER; i++) {
        printf("%d人目：", i + 1);
        scanf("%s %d %lf", std[i].name, &std[i].height, &std[i].weight);
    }

    //ソート方法の選択
    int choice;
    printf("ソート方法を選んでください（1：身長順, 2：名前順）：");
    scanf("%d", &choice);

    //ソートの実行
    if (choice == 1) {
        sort_by_height(std, NUMBER);
        puts("\n身長順にソートしました。");
    } else if (choice == 2) {
        sort_by_name(std, NUMBER);
        puts("\n名前順にソートしました。");
    } else {
        puts("不正な選択です。データはソートされません。");
    }

    //結果表示
    for (int i = 0; i < NUMBER; i++) {
        printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
    }

    return 0;
}