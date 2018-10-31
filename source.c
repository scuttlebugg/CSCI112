/*
 
Analysis
					 
	Inputs (data description your app accepts): input special characters
	
	Outputs (data description data your program produces and in what formats): numerical values of escape characters
	
	Constraints (list ALL found in problem statement): must access library, must output as string literals 
	
	Formulas (in any): none

*/

/*

Design (Requires one level of step-wise refinement for all steps)
1.0 run input series program input()
	1.1 ascii library escape char reference
2.0 output data in concolse and .txt file
	2.1 numeric values
	2.2 descriptions

*/

/*

Testing (Minimum of one test case)

input: '\n'
output: 10

*/

//Implementation starts here

#include <stdio.h>

void input();

int main()
{
	input();

	return 0;
}

void input()
{
	int null = '\0';
	int backspace = '\b';
	int vertTab = '\v';
	int horiTab = '\t';
	int newline = '\n';
	int formFeed = '\f';
	int carrReturn = '\r';
	int qdouble = '\"';
	int qsingle = '\'';
	int backSlash = '\\';
	
	printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t", null, backspace, vertTab, horiTab, newline, formFeed, carrReturn, qdouble, qsingle, backSlash);
}
