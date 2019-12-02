#include <stdio.h>

FILE *fpIn, *fpOut;

int main() {

	char input;

	if (!(fpIn = fopen("data.txt", "r"))) {
		printf("Error; can't open file.\n");
		return -1;
	}

	if (!(fpOut = fopen("checking.txt", "w"))) {
		printf("Error; can't write file.\n");
		return -1;
	}

	//read from a file the first character

	//input = getc(fp);
	//printf("%c\n", input);

	//read from file individual characters

	while ((input = getc(fpIn))!= EOF)
	{

		printf("%c", input); 
		putc(input, fpOut);  //can be used in place of fprintf

	}

	fclose(fpIn);
	fclose(fpOut);

	return 0;
}