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
#include <stdlib.h>

FILE *fp;

int main() {
	int heartbeats;

	int years = 50;
	int days = 365;
	int hours = 24;
	int minutes = 60;
	int bpm = 60;

	fp = fopen("csis.txt", "w");

	heartbeats = bpm * minutes * hours * 365 * 50;

	printf("%d" " heartbeats over " "%d" " years!", heartbeats, years);
	fprintf(fp,"%d" " heartbeats", heartbeats);

	return 0;
}