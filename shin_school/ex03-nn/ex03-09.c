#include <stdio.h>

int main(void)
{
    int n, p, w1, w2, w3;

    printf("人数を入力してください："); scanf("%d", &n);
    printf("費用を入力してください："); scanf("%d", &p);

    w1 = p / n;
    w2 = ((double)p / n) + 0.5;
    w3 = ((double)p / n) + 0.9;

    printf("一人当たりの金額は、一円未満を切り捨てる場合%d円、四捨五入する場合%d円、切り上げる場合%d円です。", w1, w2, w3);

    return 0;
}