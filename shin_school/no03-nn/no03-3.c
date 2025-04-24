#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d", &n);
    m = (int)(n / 5.0 + 0.5) * 5;
    printf("%d\n", m);
    return 0;
}