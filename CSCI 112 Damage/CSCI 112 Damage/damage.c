/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 9/24/2018
IDE version: Visual Studio 2017
OS version: Windows 10
Lab Assignment: Damage
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): float length of flagpole, float length from ground to weakspot
	
	Outputs (data description data your program produces and in what formats): float where pole will land (distance across ground from base)
	
	Constraints (list ALL found in problem statement): have to use feet, functions performing calculations must return calculation to calling function as return value
	
	Formulas (in any): a^2 + b^2 = c^2 (Pythagorean theorum)

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

1.0 Input
	1.1 Prompt user for input
	1.2 Assign input values to variables poleHeight & breakHeight
2.0 Perform calculationss
	2.1 Calculate hypotenuse poleHeight - breakHeight
	2.1 Calculate damageZone
		2.1.1 Apply pythagorean theorum and apply to variable damageZone
3.0 Display results


*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

input 8 feet poleHeight, 3 feet breakHeight 
output 4 feet

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>
#include <math.h>

float dangerZone(float, float);

int main() {

	float damageZone, poleHeight, breakHeight;

	printf("Enter the total height (in feet) of the breaking flagpole: ");
	scanf("%f", &poleHeight);
	printf("Enter the total height (in feet) of the break point from the ground: ");
	scanf("%f", &breakHeight);

	damageZone = dangerZone(poleHeight, breakHeight);

	return 0;
}

float dangerZone(float poleHeight, float breakHeight) {

	float damageZoneSquared, damageZone;
	float hypotenuse = poleHeight - breakHeight;

	damageZoneSquared = pow(hypotenuse, 2) - pow(breakHeight, 2);
	damageZone = sqrt(damageZoneSquared);

	if (hypotenuse > 0) {
		printf("\nMove everything %.2f feet from the base of that flagpole!\n", damageZone);
	}
	else {
		printf("These are not valid inputs\n");
	}

	return damageZone;
}