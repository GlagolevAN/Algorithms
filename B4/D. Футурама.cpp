#include <sstream>
#include <iostream>
#include <fstream>

int bodyswap(int* body, int a, int b)
{
    printf("%d %d\n", a, b);

    int tmp = body[a];
    body[a] = body[b];
    body[b] = tmp;

    return tmp;
}


int main(void)
{
    int N = 0;
    int n = 0, m = 0;
    int i = 0;
    int a = 0, b = 0;
    int tmp = 0;

    scanf("%d %d", &n, &m);

    int *body = new int[n + 1]();

    for (i = 0; i < n + 1; i++)
        body[i] = i;

    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        tmp = body[a];
        body[a] = body[b];
        body[b] = tmp;
    }


    int now = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (body[i] != i)
        {
            now = i;
            while (body[now] != i)
                now = bodyswap(body,
                               now, n - 1);
            now = bodyswap(body, now, n);
            now = bodyswap(body, now, n);
            bodyswap(body,
                     body[n - 1], n - 1);
        }
    }

    if (body[n - 1] == n)
        bodyswap(body, n - 1, n);



    return 0;
}
