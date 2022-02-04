#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define LEN 66666

int read_array(const char* name, int** a, int* K, int* L);

int main(void)
{
    int *columns = nullptr;
    int K = 0, L = 0;
    int left = 0, right = 0;

    read_array("input.txt", &columns, &K, &L);

    if (L % 2 == 1)
        for (int i = 0; i < K; i++)
        {
            if (columns[i] <= L/2) left = columns[i];
            if (columns[i] >= L/2) { right = columns[i]; break; }
        }
    else
        for (int i = 0; i < K; i++)
        {
            if (columns[i] < L/2) left = columns[i];
            if (columns[i] >= L/2) { right = columns[i]; break; }
        }

    if (left >= right)
        printf("%d\n", left);
    else
        printf("%d %d\n", left, right);

    return 0;
}



int read_array(const char* name, int** a, int* K, int* L){
	FILE * fp;
	int i;

	if(!(fp = fopen(name, "r"))) return -1;

	fscanf(fp, "%d", L);
	fscanf(fp, "%d", K);


	*a = (int*) malloc( (*K) * sizeof(int));
	for(i = 0; i < *K; i++){
		if(fscanf(fp, "%d", (*a + i)) != 1){
			fclose(fp); /* Возможно он пропустил */
			return -2;  /* if(!feof(fp)){ ... }  */
		}
	}
	fclose(fp);

	return 0;
}
