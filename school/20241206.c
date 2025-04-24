#include <stdio.h>
#include <math.h>

int check(double,double,double);

int main()
{
    double x,y,z;

    入力(x,y,z);
    if (check(x, y, z) == 1) {
        出力("直角三角形である");
    } else {
        出力("直角三角形でない");
    }
    return 0;
}

int check(double a, double b, double c) {
    if(
        ( pow(a,2)==pow(b,2)+pow(c,2) )
        ||
        ( pow(b,2)==pow(a,2)+pow(c,2) )
        ||
        ( pow(c,2)==pow(a,2)+pow(b,2) )
    ) return 1;
    else return 0;
}