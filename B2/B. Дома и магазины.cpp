#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define LEN 66666

int read_array(const char* name, int* a, int n);

int main(void) {
    int street[10];
    int max_d1 = 0, max_d2 = 0;
    int max_gl = 0, min_gl = 0;
    int i, j;


    read_array("input.txt", street, 10);

    for (i = 0; i < 10; i++)
    {
        if (street[i] == 1)
        {
            max_d2 = 10; max_d1 = 10;
            for (j = 1; i + j <= 10; j++)
            {
                if (street[i + j] == 2)
                {
                    max_d1 = j;

                    break;
                }
            }
            //if (breaker == 0) max_d1 = 10;
            //  breaker = 0;
            for (j = 1; i - j >= 0; j++)
            {
                if (street[i - j] == 2)
                {
                    max_d2 = j;

                    break;
                }
            }

            //printf("For %d to left %d, to right %d\n", i, max_d1, max_d2);
            min_gl = (max_d1 > max_d2) ? max_d2 : max_d1;

            if (max_gl < min_gl) max_gl = min_gl;
        }
    }
    printf("%d\n", max_gl);
    return 0;
}


int read_array(const char* name, int* a, int n){
	FILE * fp;
	int i;

	if(!(fp = fopen(name, "r"))) return -1;

	for(i = 0; i < n; i++){
		if(fscanf(fp, "%d", (a + i)) != 1){
			fclose(fp); /* Возможно он пропустил */
			return -2;  /* if(!feof(fp)){ ... }  */
		}
	}
	fclose(fp);

	return 0;
}
