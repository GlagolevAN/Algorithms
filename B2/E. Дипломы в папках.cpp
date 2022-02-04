#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#define LEN 66666

int read_array(const char* name);

int main(void) {
    int max_d1 = 0, max_d2 = 0;
    int max_gl = 0, summa = 0;
    int i;
    int len;

    printf("%d\n", read_array("input.txt"));
    return 0;
}


int read_array(const char* name){
	FILE * fp;
	int i, len = 0;
    int  summa = 0, max_gl = 0;
    int* diploma = nullptr;

	if(!(fp = fopen(name, "r"))) return -1;

    fscanf(fp, "%d", &len);
    diploma = (int*) malloc(len * sizeof(int));
	for(i = 0; i < len; i++){
		if(fscanf(fp, "%d", (diploma + i)) != 1){
			fclose(fp); /* Возможно он пропустил */
			return -2;  /* if(!feof(fp)){ ... }  */
		}
	}
	fclose(fp);

    for (i = 0; i < len; i++)
    {
        if (diploma[i] > max_gl)
        {
            max_gl = diploma[i];
            //i_max = i;
        }
        summa += diploma[i];
    }
	return summa - max_gl;
}
