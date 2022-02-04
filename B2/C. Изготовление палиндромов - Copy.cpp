#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define LEN 66666

int main(void)
{
    char buf[LEN];
    char *left = buf, *right;
    int i;

    fgets(buf, LEN, stdin);
    for (i = 0; buf[i]; i++)
        if (buf[i] == '\n')
            { buf[i] = 0; break; }
    right = buf + i - 1;
    printf("%d\n", i);
    i = 0;
    while (left < right)
    {
        if (*right != *left) i++;
        right--; left++;
    }

    printf("%d\n", i);

    return 0;
}
