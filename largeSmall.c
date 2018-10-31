/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 9/20/2018
IDE version: Visual Studio 2017
OS version: Windows 10
Lab Assignment: Large and Small Lab
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): input 4 integers
	
	Outputs (data description data your program produces and in what formats): 2 integers, largest and smallest numbers
	
	Constraints (list ALL found in problem statement): must use compare(), must display largest and smallest values, output 
	file must displayuser prompts and four integers entered. Use main() function as first function provided in the text 
	without modifying. Use prototypes for all functions used. 
	
	Formulas (in any): none, just comparisons.

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

1.0 prompt user for input
		1.1 enter 4 int values
2.0 calculate largest value
		2.1 assign to BigOne
3.0 Calculate smllest value
		3.1 assign to LittleOne
4.0 Print to console
5.0 Output to csis.txt file

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

1, 0, 45, -10

Expected output:

Largest = 45
Smallest = -10

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>

void compare();

FILE *fp;

int main(void) {
	int i;

	fp = fopen("csis.txt", "w");
	for (i = 1; i <= 4; ++i) {
		compare();
	}
	fclose(fp);
	return 0;
}

void compare()
{
	int BigOne = 0, LittleOne = 100,
		num1, num2, num3, num4;

	//user input
	printf("\nEnter 4 integers: \n");
	fprintf(fp, "\nEnter 4 integers: \n");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	fprintf(fp, "%d %d %d %d\n", num1, num2, num3, num4);


	//calculating BigOne
	if (num1 > num2 && num1 > num3 && num1 > num4) {
		BigOne = num1;
	}
	else if (num2 > num1 && num2 > num3 && num2 > num4)
	{
		BigOne = num2;
	}
	else if (num3 > num1 && num3 > num2 && num3 > num4)
	{
		BigOne = num3;
	}
	else if (num4 > num1 && num4 > num2 && num4 > num3)
	{
		BigOne = num4;
	}

	//calculating LittleOne
	if (num1 < num2 && num1 < num3 && num1 < num4)
	{
		LittleOne = num1;
	}
	else if (num2 < num1 && num2 < num3 && num2 < num4)
	{
		LittleOne = num2;
	}
	else if (num3 < num1 && num3 < num2 && num3 < num4)
	{
		LittleOne = num3;
	}
	else if (num4 < num1 && num4 < num2 && num4 < num3)
	{
		LittleOne = num4;
	}
	//print outcomes BigOne & LittleOne
	printf("Largest: %d\nSmallest: %d\n", BigOne, LittleOne);
	fprintf(fp, "Largest: %d\nSmallest: %d\n", BigOne, LittleOne);

}

//still need to include printing ALL requirements to output file
