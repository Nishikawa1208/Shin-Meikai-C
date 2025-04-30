#include <stdio.h>

int main(void)
{
    char filename[256];  // ファイル名を格納する配列
    FILE *fp;

    printf("ファイル名を入力してください：");
    scanf("%255s", filename);  // ファイル名を読み込む（バッファオーバーフロー防止のため制限）

    fp = fopen(filename, "r");  // 読み取り専用でファイルを開く

    if (fp == NULL)
        printf("そのファイルは存在しません。\n");
    else {
        printf("そのファイルは存在します。\n");
        fclose(fp);  // ファイルを閉じる
    }

    return 0;
}
