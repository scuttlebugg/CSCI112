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
/*
	Test Case
	Case #1: user enters T
	Case #2: user enter t
	Case #3: user enters any character a-z, A-Z, 0-9, except t, T, s, S
 */
#include <stdio.h>
#include <ctype.h>
#define TRIANGLE 'T'
#define SQUARE 'S'
void DrawSquare();      //draw a square
void DrawTriangle();    //draw a triangle
char GetUserInput();    //get the user input of t or s
int main()
{
	char user_selection;
	user_selection = GetUserInput();

	//draw the selected shape
	switch (user_selection)
	{
	case TRIANGLE:
		DrawTriangle();
		break;
	case SQUARE:
		DrawSquare();
		break;
	default:
		printf("There is an error in the selection!\n");  //default error message
	}
	return 0;
}
void DrawSquare()
{
	printf("***********\n");
	printf("*         *\n");
	printf("*         *\n");
	printf("*         *\n");
	printf("***********\n");
}
void DrawTriangle()
{
	printf("     *     \n");
	printf("    * *    \n");
	printf("   *   *   \n");
	printf("  *     *  \n");
	printf(" ********* \n");
}
char GetUserInput()
{
	char selection;
	printf("t Triangle\n");
	printf("s Square\n");
	printf("Select a shap to display: ");
	scanf("%c", &selection);
	return toupper(selection);
}