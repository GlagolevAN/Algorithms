#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int comp (const long int *x, const long int *y);

int main(void)
{
    int N = 0, i = 0;
    long int* doma = nullptr;

    scanf("%d", &N);
    doma = (long int*) malloc (N * sizeof(long int));

    for (i = 0; i < N; i++)
    {
        scanf("%ld", doma + i);
    }
    qsort(doma, N, sizeof (long int),
    (int(*) (const void *, const void *)) comp);


    //for (i = 0; i < N; i++)
     //   printf("%ld ", doma[i]);
    printf("%d", doma[N / 2]);

    return 0;
}


int comp (const long int *x, const long int *y)
{
    if (*x > *y) return 1;
    else return 0;
}
