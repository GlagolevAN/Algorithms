#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#define EPS 1e-8

int main(void)
{
    int d = 0, x = 0, y = 0;
    int delta1 = 0, delta2 = 0;
    double a, b, c, minimum;

    scanf("%d %d %d", &d, &x, &y);

    if (y >= 0 &&
        x >= 0 && x + y <= d)
            { printf("0"); return 0; }

    a = sqrt(x * x + y * y);
    b = sqrt((x-d) * (x - d) +
               y * y);
    c = sqrt(x * x +
                  (y - d) * (y - d));

    if (a < b + EPS)
    {
        if (a < c + EPS)
            printf("1");
        else
            if (b < c + EPS)
                printf("2");
            else printf("3");
    }
    else
        if (b < c + EPS)
            printf("2");
        else printf("3");

    return 0;
}
