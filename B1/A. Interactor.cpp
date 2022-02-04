#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define LEN 66666

int main(void)
{
    char r = 0, i = 0, c = 0;

    scanf("%d", &r);
    scanf("%d", &i);
    scanf("%d", &c);

    if (i == 0)
    {
        if (r != 0)
            printf("3");
        else
            printf("%d", c);
    }
    else
        if (i == 1)
            printf("%d", c);
        else
            if (i == 4)
            {
                if (r != 0)
                    printf("3");
                else
                    printf("4");
            }
            else
                if (i == 6)
                    printf("0");
                else
                    if (i == 7)
                        printf("1");
                    else
                        printf("%d", i);

    return 0;
}
