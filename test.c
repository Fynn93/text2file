#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if( argc < 3 ) {
       printf("Not enough arguments supplied.\n");
    }
	FILE *fp;
	char* str = "string";
	int x = 10;

	fp=fopen(argv[1], "a+");
	if(fp == NULL)
		exit(-1);
	fprintf(fp, "%s\n", argv[2]);
	fclose(fp);
}
