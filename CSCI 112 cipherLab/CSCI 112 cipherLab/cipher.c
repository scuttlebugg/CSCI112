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
--outputs as book shows! Huzzah!

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZECONGRESS 500

int processFile(char[]);
void cipher(char[]);
void outputCode(char[]);

int main() {
	char congressArray[SIZECONGRESS];

	//get text from congress.txt
	processFile(congressArray);

	/*check for successful file read, upper, exclusions, and array output.
	printf(congressArray);
	printf("\n");*/

	//accept amount to shift and put into null terminated char array
	cipher(congressArray);

	/*check for proper offset of values
	printf(congressArray);
	printf("\n");*/

	outputCode(congressArray);

	return 0;
}

//reads to congressArray, puts all uppercase, discards all punctuation & blanks
int processFile(char congressArray[]) {
	int index, end, counter;
	char string[1000];
	FILE *congressFile;

	//test for file open error
	if (!(congressFile = fopen("congress.txt", "r"))) {
		printf("Code file could not be opened.\n");
		exit(1);
	}
	while (!feof(congressFile)) {
		fgets(string, SIZECONGRESS, congressFile);

		end = strlen(string);

		//puts codefile info into codeArray
		for (counter = -1, index = -1; index < end; index++) {
			if (string[index] >= 65 && string[index <= 90]) {
				congressArray[++counter] = (toupper(string[index]));
			}
			else if (string[index] >= 97 && string <= 122) {
				congressArray[++counter] = string[index] - 0;
			}
		}
		congressArray[++counter] = '\0';
		fclose(congressFile);

		return strlen(congressArray);
	}
}

//calculates shift of 13 with either addition or substraction, depending on the letter
void cipher(char congressArray[]) {
	int offsetValue = 0;
	for (unsigned int index = 0; index < strlen(congressArray); index++) {
		if (congressArray[index] > 77) {
			congressArray[index] -= 13;
		}
		else if (congressArray[index] <= 77) {
			congressArray[index] += 13;
		}
	}
}

//outputs to terminal and .txt file in the 10 rows of 5 char format.
void outputCode(char congressArray[]) {
	FILE *fp;
	fp = fopen("csis.txt", "w");

	for (unsigned int row = 0; row < strlen(congressArray); row++) {
		if (row % 5 == 0) {
			printf(" ");
			fprintf(fp, " ");
		}
		if (row % 50 == 0) {
			printf("\n");
			fprintf(fp, "\n");
		}
		printf("%c", congressArray[row]);
		fprintf(fp, "%c", congressArray[row]);
	}
}