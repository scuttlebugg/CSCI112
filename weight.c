/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 9/9/2018
IDE version: Visual Studio 2017
OS version: Microsoft 10
Lab Assignment: Weight Lab
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): This program accepts a double for the earthWeight input of 200.
	
	Outputs (data description data your program produces and in what formats): This program outputs doubles for the calculated weight of a 200 pount person
	
	Constraints (list ALL found in problem statement): forat constraints of right justified planet names, and decial numbers aligned by decimal point. All numbers will be printed to one decimal place.
	
	Formulas (in any): 	
	
	mercuryWeight = MERCURY * earthWeight
	venusWeight = VENUS * earthWeight
	marsWeight = MARS * earthWeight
	jupiterWeight = JUPITER * earthWeight
	saturnWeight = SATURN * earthWeight
	uranusWeight = URANUS * earthWeight
	neptuneWeight = NEPTUNE * earthWeight

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

input earth weight and define formulas for conversion
	perform conversion calculations
disply results 
	print planets
		rigt justified 
	print numbers
		align decimlas and print to one decial place
end program

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

check that first equation calculates properly
add other calculations
check and adjust format of outputs

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>

FILE *fp;

#define MERCURY 0.378
#define VENUS 0.907
#define MARS 0.377
#define JUPITER 2.36
#define SATURN 0.916
#define URANUS 0.889
#define NEPTUNE 1.12

int main() {

	double earthWeight = 200;

	double mercuryWeight;
	double venusWeight;
	double marsWeight;
	double jupiterWeight;
	double saturnWeight;
	double uranusWeight;
	double neptuneWeight;

	fp = fopen("csis.txt", "w");
	
	mercuryWeight = MERCURY * earthWeight;
	venusWeight = VENUS * earthWeight;
	marsWeight = MARS * earthWeight;
	jupiterWeight = JUPITER * earthWeight;
	saturnWeight = SATURN * earthWeight;
	uranusWeight = URANUS * earthWeight;
	neptuneWeight = NEPTUNE * earthWeight;

	printf("%10s: %5.1lf\n", "Mercury", mercuryWeight);
	fprintf(fp, "%10s: %5.1lf\n", "Mercury", mercuryWeight);
	printf("%10s: %5.1lf\n", "Venus", venusWeight);
	fprintf(fp, "%10s: %5.1lf\n", "Venus", venusWeight);
	printf("%10s: %5.1lf\n", "Mars", marsWeight);
	fprintf(fp,"%10s: %5.1lf\n", "Mars", marsWeight);
	printf("%10s: %5.1lf\n", "Jupiter", jupiterWeight);
	fprintf(fp, "%10s: %5.1lf\n", "Jupiter", jupiterWeight);
	printf("%10s: %5.1lf\n", "Saturn", saturnWeight);
	fprintf(fp, "%10s: %5.1lf\n", "Saturn", saturnWeight);
	printf("%10s: %5.1lf\n", "Uranus", uranusWeight);
	fprintf(fp, "%10s: %5.1lf\n", "Uranus", uranusWeight);
	printf("%10s: %5.1lf\n", "Neptune", neptuneWeight);
	fprintf(fp, "%10s: %5.1lf\n", "Neptune", neptuneWeight);

	return 0;
}
