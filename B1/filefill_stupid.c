#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argv, char * argc[]){
	FILE * fp;
	int n, i;

	if(argv != 2){
		printf("\nUsage : %s name", argc[0]);
		return 1;
	}

	if(!(fp = fopen(argc[1], "r"))){
		printf("\nError : can not open %s\n\n", argc[1]);
		return 1;
	}

	fclose(fp);
	fp = fopen(argc[1], "w");

	srand(time(NULL));

	printf("\nEnter number of elements : ");

	if(scanf("%i", &n) != 1){
		printf("\nError : wrong input\n\n");
		return 1;
	}


	for(i = 0; i < n; i++){
		if(!(i % 10)) fprintf(fp, "\n");
		fprintf(fp, "  %-2i", n - i);
	}

	fclose(fp);

	return 0;
}
