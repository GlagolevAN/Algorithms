#include <sstream>
#include <iostream>
#include <fstream>

int main(void)
{
    int P = 8;
    int res2 = 0, res3 = 0, m = 0, n = 0;

    std::cin >> P;

    if (P == 4)
    {
        printf("%d\n", -1);
        return 0;
    }
    if (P == 8)
    {
        printf("%d %d %d\n", 2, 3, 3);
        printf("%d %d %d\n", 2, 3, 3);
        return 0;
    }
    //MAX
    n = P / 3;
    res3 = P % 3;
    if (res3 == 0)
        printf("%d %d %d\n", n, n, n);
    else
        if (res3 == 1)
            printf("%d %d %d\n", n, n, n + 1);
        else
            printf("%d %d %d\n", n, n + 1, n + 1);
    //----------------------
    //MIN
    res2 = P % 2;
    m = P / 2;

    if (res2 == 1)
    {
        printf("1 %d %d\n", m, m);
        return 0;
    }

    printf("2 %d %d\n", m - 1, m - 1);


    return 0;
}

