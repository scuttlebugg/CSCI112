/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 9/4/2018
IDE version: VS 2017
OS version: Windows 10
Lab Assignment: Speed Lab
*********************************************************************************************/

/*********************************************************************************************

Analysis

	Inputs (data description your app accepts): double distance, double time.

	Outputs (data description data your program produces and in what formats): 2 long float produced, and string indicating respective speeds.

	Constraints (list ALL found in problem statement): none

	Formulas (in any): speed = distance / time, mps = mph * 0.444444

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps):
declare variables and data types
assign values to variables distance and time
perform calculations as per speed formula above
print results
perform conversion to mps as per conversion factor above
print results

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>
#include <stdlib.h>

FILE *fp;

int main()
{
	double speed_mph;
	double speed_mps;
	double distance_miles;
	double time_hours;

	fp = fopen("csis.txt", "w");

	distance_miles = 425.5;
	time_hours = 7.5;

	speed_mph = distance_miles / time_hours;

	speed_mps = speed_mph * 0.444444;

	printf("%.2lf" " mph\n", speed_mph);
	fprintf(fp, "%.2lf" " mph\n", speed_mph);
	printf("%.2lf" " mps\n", speed_mps);
	fprintf(fp, "%.2lf" " mps\n", speed_mps);

	return 0;
}