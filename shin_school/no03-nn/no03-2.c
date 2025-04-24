#include <stdio.h>
//ここに空行を入れよう
int main(void)
{
    double x, y;

    x = 10.0 / 3.0;
    y = 0.1;
    x = 10.0 - 3 * x;
    y = 1.0 - 10 * y;
    printf("x = %7.4e\n"
            "y = %7.4e\n", x, y);
    return 0;
}