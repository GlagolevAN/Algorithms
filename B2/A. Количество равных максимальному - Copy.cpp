#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define LEN 66666

using namespace std;

int main(void) {
    ifstream fin("input.txt");
    int x;
    int max_el = 0, counter = 1;

    while (fin >> x)
    {
        if (x == 0) break;
        if (max_el == x)
        {
            counter++;
        }
        if (max_el < x)
        {
            max_el = x;
            counter = 1;
        }
    }

    fin.close();
    printf("%d\n", counter);
    return 0;
}
