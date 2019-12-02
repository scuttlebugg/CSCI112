#include <stdio.h>

FILE *inputPtr;
int main(void) 
{
	int inputChar, inputNumber;
	if (!(inputPtr = fopen("input.txt", "r")))
	{
		printf("Error reading file.\n");
		return -1;
	}

	//read file using fscanf
	while(!feof(inputPtr))  //allows loop to continue until EOF marker
	{
		fscanf(inputPtr, "%c %d", &inputChar, &inputNumber);
		printf("%c %d\n", inputChar, inputNumber); //put inside loop. Outsideof loop, you'd only see last values read

	}

	fclose(inputPtr);

	return 0;
}