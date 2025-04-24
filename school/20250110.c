#include <stdio.h>

int main(void)
{
    int i = 1, t;
    int k[8] = {1};
    while(i < 7){
        t = k[i-1] * 3 + 4;
        k[i] = t % 7;
        i++;
    }

    printf("%d %d %d %d %d %d %d %d\n", k[0], k[1], k[2], k[3], k[4], k[5], k[6], k[7]);
    printf("i = %d, t = %d\n", i, t);

    return 0;
}