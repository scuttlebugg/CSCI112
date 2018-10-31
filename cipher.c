/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: October 30, 2018
IDE version: Visual Studio 2017
OS version: Windows 10
Lab Assignment: Cipher Lab
*********************************************************************************************/

/*********************************************************************************************
 
Analysis
					 
	Inputs (data description your app accepts): congress.txt file into an congressArray
	
	Outputs (data description data your program produces and in what formats): outputCode() 
	will output to terminal window and csis.txt file, ten blocks of five letters per line.
	
	Constraints (list ALL found in problem statement): output constraints, must be 5 letters 
	per block, 10 blocks per line. Use functions cipher(), processFile(), outputCode(), 
	needs to accept shift as input, put encoded letters into null-terminated array of characters
	
	Formulas (in any): N/A

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

1.0 Read file congress.txt with processFile()
	1.1 bring into congressArray
2.0 manipulate congressArray in processFile()
	2.1 ignore all spaces, punctuation, etc (alpha)
	2.2 make all characters upercase
3.0 shift with cipher()
	3.1 accept the amount to shift
	3.2 put encoded letters into nunll-terminated char array
4.0 outputCode() output to terminal and to csis.txt file
	4.1 ten blocks per line with 5 characters per block

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)
congress.txt with shift of 1 

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZECONGRESS 500

void processFile(char[]);

int main() {
	char congressArray[SIZECONGRESS];
	
	//get text from congress.txt
	processFile(congressArray);

	//check for successful file read, conversion, exclusions, and array output
	printf(congressArray);

	return 0;
}

void processFile(char congressArray[]) {									//reads to congressArray, puts all uppercase, discards all punctuation & blanks
	int index; 
	FILE *congressFile;

	if (!(congressFile = fopen("congress.txt", "r"))) {					//test for file open error
		printf("Code file could not be opened.\n");
		exit(1);
	}
		while (fgets(congressArray, sizeof congressArray, congressFile) != NULL) {

			for (index = 0; index < SIZECONGRESS; index++) {					//puts codefile info into codeArray
				if (isalpha(congressArray[index]) == 1) {
					congressArray[index] = toupper(congressArray[index]);
					congressArray[index] = getc(congressFile);
				}
				fclose(congressFile);
			}
		}
	}
