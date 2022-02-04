#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(void)
{
    char N = 0, start = 0, finish = 0;
    char delta1 = 0, delta2 = 0;

    scanf("%d", &N);
    scanf("%d", &start);
    scanf("%d", &finish);

    if (start < finish)
    {
        delta1 = finish - start;
        delta2 = N + start - finish;
        printf("%d", ((delta1 < delta2)
                ? delta1 :  delta2)   - 1);
                return 0;
    }
    else
    {
        delta1 = start - finish;
        delta2 = N + finish - start;
        printf("%d", ((delta1 < delta2)
                ? delta1 :  delta2)   - 1);
                return 0;
    }
    return 0;
}
