#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// じゃんけんの手を表示
void print_hand(int hand) {
    char *hands[] = {"[グー]", "[チョキ]", "[パー]"};
    printf("%s", hands[hand]);
}

// 方向を表示
void print_direction(int direction) {
    char *directions[] = {"[上]", "[下]", "[左]", "[右]"};
    printf("%s", directions[direction]);
}

// じゃんけんの勝敗判定 (勝ち:1, 負け:-1, あいこ:0)
int judge_janken(int player, int computer) {
    if (player == computer) return 0;
    if ((player == 0 && computer == 1) || 
        (player == 1 && computer == 2) || 
        (player == 2 && computer == 0)) return 1;
    return -1;
}

// 選択肢の入力
int select_option(int max, char *message) {
    int choice = -1;
    while (choice < 0 || choice >= max) {
        printf("%s\n", message);
        for (int i = 0; i < max; i++) {
            printf("%d: ", i);
            if (max == 3) print_hand(i);
            else print_direction(i);
            printf("\n");
        }
        printf("選択 >> ");
        scanf("%d", &choice);

        if (choice < 0 || choice >= max) {
            printf("無効な入力です。もう一度選択してください。\n");
        }
    }
    return choice;
}

int main() {
    int player_hand, computer_hand, player_direction, computer_direction;
    int win_streak = 0;

    srand(time(NULL));

    while (1) {
        // じゃんけん
        printf("\n=== じゃんけん ===\n");
        player_hand = select_option(3, "あなたの手を選んでください:");
        computer_hand = rand() % 3;

        printf("\nあなたの手: ");
        print_hand(player_hand);
        printf("\nコンピュータの手: ");
        print_hand(computer_hand);
        printf("\n");

        int result = judge_janken(player_hand, computer_hand);
        if (result == 0) {
            printf("\nあいこです！もう一度！\n");
            continue;
        } else if (result == -1) {
            printf("\nじゃんけんに負けました...ゲーム終了。\n");
            printf("あなたの連勝数: %d\n", win_streak);
            break;
        }

        printf("\nじゃんけんに勝ちました！\n");
        
        // あっち向いてホイ
        printf("\n=== あっち向いてホイ ===\n");
        player_direction = select_option(4, "向く方向を選んでください:");
        computer_direction = rand() % 4;

        printf("\nあなた: ");
        print_direction(player_direction);
        printf("\nコンピュータ: ");
        print_direction(computer_direction);
        printf("\n");

        if (player_direction == computer_direction) {
            printf("\nあなたの勝ち！！おめでとうございます！\n");
            win_streak++;
            printf("現在の連勝数: %d\n", win_streak);
        } else {
            printf("\n引き分けです！もう一度挑戦しましょう。\n");
        }
    }

    return 0;
}
