#include <sstream>
#include <iostream>
#include <fstream>

int main(void)
{
    int N = 0, K = 0;
    int i = 0;
    long long int x = 0;

    scanf("%d %d", &N, &K);

    long long int minim = 0, maxim = 0;
    scanf("%lld", &minim);
    maxim = minim;
    for (i = 1; i < N; i++)
    {
        scanf("%lld", &x);
        if (x > maxim) maxim = x;
        if (x < minim) minim = x;
    }

    printf("%lld\n", maxim - minim);
    return 0;
}
