/*********************************************************************************************
Class No.: 
Student Name:
Student No.:
Date:
IDE version:
OS version:
Lab Assignment: 
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): 
	
	Outputs (data description data your program produces and in what formats):
	
	Constraints (list ALL found in problem statement):
	
	Formulas (in any):

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

*********************************************************************************************/

//Implementation starts here
#include <stdio.h>

FILE *fp;

int main() {

	char input;
	if (!(fp = fopen("data.txt", "r"))) {
		printf("Error; can't create file.\n");
		return -1;
	}

	//read from a file the first character

	input = getc(fp);
	printf("%c\n", input);

	//read from file individual characters

	while ((input = getc(fp)) != EOF)
	{
		printf("%c", input);
	}

	fclose(fp);

	return 0;
}