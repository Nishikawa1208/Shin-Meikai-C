#include <stdio.h>

// 素数を計算する関数
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void generate_sequence(int *sequence, int length, int level) {
    // レベルに応じた規則性を持つ数列を生成
    if (level == 1) {
        // 1つずつ増える簡単な数列
        for (int i = 0; i < length; i++) {
            sequence[i] = i + 1;
        }
    } else if (level == 2) {
        // 2ずつ増える数列
        for (int i = 0; i < length; i++) {
            sequence[i] = (i + 1) * 2;
        }
    } else if (level == 3) {
        // 3の倍数の数列
        for (int i = 0; i < length; i++) {
            sequence[i] = (i + 1) * 3;
        }
    } else if (level == 4) {
        // 2の累乗の数列
        for (int i = 0; i < length; i++) {
            sequence[i] = 1 << i;  // 2の累乗
        }
    } else if (level == 5) {
        // 2倍ずつ増加する数列（指数関数的な増加）
        for (int i = 0; i < length; i++) {
            sequence[i] = 1 << (i + 1);  // 2^(i+1)
        }
    } else if (level == 6) {
        // 各要素が前の2つの要素の和（フィボナッチ数列）
        sequence[0] = 1;
        sequence[1] = 1;
        for (int i = 2; i < length; i++) {
            sequence[i] = sequence[i - 1] + sequence[i - 2];
        }
    } else if (level == 7) {
        // 素数の数列
        int num = 2;
        int index = 0;
        while (index < length) {
            if (is_prime(num)) {
                sequence[index++] = num;
            }
            num++;
        }
    } else if (level == 8) {
        // 2の倍数と3の倍数を交互にする数列
        for (int i = 0; i < length; i++) {
            if (i % 2 == 0) {
                sequence[i] = (i + 1) * 2;  // 2の倍数
            } else {
                sequence[i] = (i + 1) * 3;  // 3の倍数
            }
        }
    } else if (level == 9) {
        // 数列の値が1, 4, 9, 16, ...のように平方数
        for (int i = 0; i < length; i++) {
            sequence[i] = (i + 1) * (i + 1);  // iの平方
        }
    } else if (level == 10) {
        // 数列の値が素数の累乗
        sequence[0] = 2;
        for (int i = 1; i < length; i++) {
            sequence[i] = sequence[i - 1] * 2;  // 2の累乗
        }
    }
}

int main() {
    int sequence[10];
    int correct_answer;
    int prediction;
    
    for (int level = 1; level <= 10; level++) {
        int length = level + 3;  // 数列の長さを段階的に増加
        generate_sequence(sequence, length, level);
        
        // 数列を表示（次の数字を予測させるためのヒント）
        printf("レベル %d - 規則性を見つけて次の数字を予測してください。\n", level);
        printf("与えられた数列: ");
        for (int i = 0; i < length; i++) {
            printf("%d ", sequence[i]);
        }
        printf("\n");

        printf("次の数字を予測してください: ");
        scanf("%d", &prediction);
        
        // 次の数字を計算
        if (level == 1) {
            correct_answer = sequence[length - 1] + 1;
        } else if (level == 2) {
            correct_answer = sequence[length - 1] + 2;
        } else if (level == 3) {
            correct_answer = sequence[length - 1] + 3;
        } else if (level == 4) {
            correct_answer = sequence[length - 1] * 2;
        } else if (level == 5) {
            correct_answer = sequence[length - 1] * 2;
        } else if (level == 6) {
            correct_answer = sequence[length - 1] + sequence[length - 2];
        } else if (level == 7) {
            correct_answer = sequence[length - 1];
            // 次の素数を予測
            int num = sequence[length - 1] + 1;
            while (!is_prime(num)) {
                num++;
            }
            correct_answer = num;
        } else if (level == 8) {
            // 交互に2の倍数と3の倍数がくる数列
            correct_answer = sequence[length - 1];
            if (length % 2 == 0) {
                // 偶数番目（2の倍数）
                correct_answer = (length + 1) * 2;
            } else {
                // 奇数番目（3の倍数）
                correct_answer = (length + 1) * 3;
            }
        } else if (level == 9) {
            correct_answer = (length + 1) * (length + 1);
        } else if (level == 10) {
            correct_answer = sequence[length - 1] * 2;
        }

        if (prediction == correct_answer) {
            printf("正解！次のレベルに進みます。\n\n");
        } else {
            printf("不正解。正しい答えは %d でした。\n\n", correct_answer);
        }
    }

    printf("ゲーム終了！すべてのレベルをクリアしました。\n");
    return 0;
}
