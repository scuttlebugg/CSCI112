/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 10/12/2018
IDE version: Visual Studio 2017
OS version: Windows 10
Lab Assignment: Statistics Lab (Extra Credit)
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): array to be initialized at compile time
	
	Outputs (data description data your program produces and in what formats): array of scores 5 per line, prints 5 per line sorted ascending,
	output freq distribution chart in decreasing value, % passing (>= 60%) and failing (< 60%) scores (nearest tenth) mean, median, mode of dataset. List 
	
	Constraints (list ALL found in problem statement): output to terminal and txt file. 5 per line.
	
	Formulas (in any): calculate mean, median & mode of grades in array, calculate frequency distribution chart in decreasing value

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>

#define SCORESIZE 30

sortScores(int scoreArray);
compare(const void *p, const void *q);

int main(void) {
	int scoreArray[SCORESIZE] = {90, 85, 100, 50, 50, 85, 60, 70, 55, 55, 80, 95, 70, 60, 95, 80, 100, 75, 70, 95, 90, 90, 70, 95, 50, 65, 85, 95, 100, 65};

	for (int index = 0; index < SCORESIZE; index++) {			//tester for array initialization success
		printf("%d ", scoreArray[index]);
	}
	printf("\n");
	sortScores(scoreArray);

	return 0;
}

int sortScores(int scoreArray[])								//sorts message in ascending order
{
	qsort(scoreArray, SCORESIZE, sizeof(int), compare);
	for (int index = 0; index < SCORESIZE; index++) {			//tester for array sorting success
		printf("%d ", scoreArray[index]);
	}
	return 0;
}

int compare(const void *p, const void *q)							//qsort function ascending order
{
	if (*(int *)p < *(int *)q) {
		return -1;
	}
	return *(int *)p > *(int *)q;
}