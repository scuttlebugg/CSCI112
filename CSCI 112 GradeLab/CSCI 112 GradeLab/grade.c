/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 9/25/2018
IDE version: Visual Studio Community 2017
OS version: Windows 10
Lab Assignment: Grade Lab
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): int unknown number of test scores
	
	Outputs (data description data your program produces and in what formats): prompt for user input, output 
	average to 2 decimal places (float)
	
	Constraints (list ALL found in problem statement): must include calculateAverage(), must use data given, 
	must output to .txt file, do not modify main, -1 be used to terminate loop,  prompt and input grades must
	be displayed in .txt file, NO ARRAYS ALLOWED, user grade inputs are integers 0-100.
	
	Formulas (in any): average = (n1 + n2 + n3...) / # n inputs

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

1.0 Prompt user for input
2.0 Assign inputs to gradeInput variable
	2.1 Add each gradeInput to gradeSum
3.0 Perform average calculation
	3.1 Divide gradeSum by counter (# inputs)
3.0 Print result grade average to user
4.0 Repeat above 3 more times (loop in main)

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

input: 0 0 0 0
output: 0

input: 50 100 60 40
output: 62.50

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>
#include <math.h>

FILE *fp;

double calculateAverage();											//user input and average grade calculation
/*
* Description: Requests the user to input grades to average four times
* Parameters: None
* Return Value: None
*/

int  main(void) {													//main function with 4 iterations; do not touch!
	int i;

	fp = fopen("cisis.txt", "w");
	for (i = 1; i <= 4; ++i) {
		calculateAverage();
	}
	fclose(fp);
	return 0;
}

double calculateAverage() {
	double counter = 0;

	int gradeInput = 0;													//user inputs must be integers
	double gradeSum = 0;

	printf("Enter grades 0 - 100 to average separated by spaces, followed by -1: \n");				//prompt user for input
	fprintf(fp, "Enter grades 0 - 100 to average separated by spaces, followed by -1: \n");

		while (gradeInput > -1 && gradeInput <= 100) {					//check for sentinal value of -1

			scanf("%d", &gradeInput);									//store input one at a time
			fprintf(fp, "%d\n", gradeInput);

			gradeSum += gradeInput;										//calculating sum of all grade inputs

			++counter;
		}

		double gradeAverage = (gradeSum + 1) / (counter - 1);			//calculating average
		printf("Your average grade is %.2f\n", gradeAverage);			//print average value to user
		fprintf(fp, "\nYour average grade is %.2f\n", gradeAverage);

		return 0;
}
