#include <stdio.h>

#define STUDENTS 6  // 学生の人数
#define SUBJECTS 2  // 科目の数（国語と数学）

int main() {
    int scores[STUDENTS][SUBJECTS]; // 各学生の点数
    int subject_totals[SUBJECTS] = {0}; // 各科目の合計点
    float subject_averages[SUBJECTS];   // 各科目の平均点
    int student_totals[STUDENTS] = {0}; // 各学生の合計点
    float student_averages[STUDENTS];  // 各学生の平均点
    int i, j;

    // 点数の入力
    printf("6人の国語と数学の点数を入力してください:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("学生%dの点数:\n", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            if (j == 0) {
                printf("  国語: ");
            } else {
                printf("  数学: ");
            }
            scanf("%d", &scores[i][j]);
        }
    }

    // 科目ごとの合計点と平均点の計算
    for (j = 0; j < SUBJECTS; j++) {
        for (i = 0; i < STUDENTS; i++) {
            subject_totals[j] += scores[i][j];
        }
        subject_averages[j] = (float)subject_totals[j] / STUDENTS;
    }

    // 学生ごとの合計点と平均点の計算
    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            student_totals[i] += scores[i][j];
        }
        student_averages[i] = (float)student_totals[i] / SUBJECTS;
    }

    // 結果の出力
    printf("\n科目ごとの結果:\n");
    for (j = 0; j < SUBJECTS; j++) {
        if (j == 0) {
            printf("国語: ");
        } else {
            printf("数学: ");
        }
        printf("合計 = %d, 平均 = %.2f\n", subject_totals[j], subject_averages[j]);
    }

    printf("\n学生ごとの結果:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("学生%d: 合計 = %d, 平均 = %.2f\n", i + 1, student_totals[i], student_averages[i]);
    }

    return 0;
}
