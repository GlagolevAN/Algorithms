#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(void)
{
    int x = 0, y = 0, z = 0;
    int delta1 = 0, delta2 = 0;


    scanf("%d %d %d", &x, &y, &z);

    if (x > 12 || y > 12)
    {
        printf("1");
        return 0;
    }
    else
        if (x == y)
            printf("1");
        else
            printf("0");


    return 0;
}
