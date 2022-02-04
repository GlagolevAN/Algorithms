#include <sstream>
#include <iostream>
#include <fstream>

int main(void)
{
    int N = 0;
    int i = 0;
    int x = 0;

    scanf("%d", &N);

    int maxim = 0, sum = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        if (x > maxim) maxim = x;
        sum += x;
    }


    if (maxim * 2 > sum)
        printf("%d\n", 2 * maxim - sum);
    else
        printf("%d\n", sum);
    return 0;
}
