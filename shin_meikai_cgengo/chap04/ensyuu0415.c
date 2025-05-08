#include <stdio.h>

int main(void)
{
    int fromcm, endcm, nancmgoto;

    printf("何cmから：");   scanf("%d", &fromcm);
    printf("何cmまで：");   scanf("%d", &endcm);
    printf("何cmごと：");   scanf("%d", &nancmgoto);

    for(int i = fromcm; i <= endcm; i += nancmgoto){
        printf("%dcm    %4.2fkg\n", i, (i - 100) * 0.9);
    }
    return 0;
}