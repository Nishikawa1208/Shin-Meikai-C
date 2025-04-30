#include <stdio.h>

int main(void)
{
    char filename[256];  //ファイル名
    FILE *fp;

    printf("ファイル名を入力してください：");
    scanf("%255s", filename);  //読み込み

    fp = fopen(filename, "r");

    if (fp == NULL)
        printf("そのファイルは存在しません。\n");
    else {
        printf("そのファイルは存在します。\n");
        fclose(fp);
    }

    return 0;
}
