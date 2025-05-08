#include <stdio.h>

int main(void)
{
    int data = 0;

    printf("データ数：");   scanf("%d", &data);
    int tensu[data];

    for(int i = 0; i < data; i++){
        printf(" %d番：", i + 1);    scanf("%d", &tensu[i]);
    }

    printf("{");
    for(int i = 0; i < data - 1; i++){
        printf("%d, ", tensu[i]);
    }
    printf("%d", tensu[data - 1]);
    printf("}\n");

    return 0;
}