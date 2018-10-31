/*********************************************************************************************
Class No.: CSCI 112
Student Name: Hannah Eilers
Student No.: 011800605
Date: 10/15/2018
IDE version: Visual Studio 2017
OS version: Windows 10
Lab Assignment: Decode Lab
*********************************************************************************************/

/**********************************************************************************************

Analysis

	Inputs (data description your app accepts): 2 text files: one a string of 53 characters, the other a series of 130 numbers

	Outputs (data description data your program produces and in what formats): 26 characters of "secret message" to the ocnsole and a csis.txt file

	Constraints (list ALL found in problem statement): Must output to terminal and txt file, include error checking for file opens,
	pass file names as command-line arguments (extra credit), must include getCode(), getMessage(), sortMessage(),
	decodeMessage()

	Formulas (in any): modulus to "cut" numbers in half --> % 100

*********************************************************************************************/

/**********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)
1.0 read numbers into array
	1.1 read msg.txt into messageArray
	1.2 read codefile.txt into codeArray (as string)
2.0 Sort message numbers
	2.1 ascending order with qsort
3.0 truncate sorted message numbers
	3.1 modulus 100 will work
4.0 Output message to console and output file
	4.1 print codeArray[messageArray[index]] to decode message
	4.2 fprintf to csis.txt

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)
Message: 1011112214128021290513541137151421415112

Decoder: CFL2AP(T9W,H!JEM86ND0BZ7UK1Y3VG4XR)ISOQ5.         ;-

Should print out the book example: HELP ME!

HELP ME!

*********************************************************************************************/

//Implementation starts here

#include <stdio.h>													//libraries to incclude
#include <stdlib.h>

#define CODEARRAY 53												//macro constants for array sizes
#define MESSAGEARRAY 26

void getCode(char[]);
void getMessage(int[]);
int sortMessage(int[]);
int compare(const void *p, const void *q);
char decodeMessage(int[], char[]);

int main() {
	char codeArray[CODEARRAY];										//initializing 2 arrays for storing file informations
	int messageArray[MESSAGEARRAY];

	getCode(codeArray);

	getMessage(messageArray);

	sortMessage(messageArray);

	decodeMessage(messageArray, codeArray);

	return 0;
}

void getCode(char codeArray[]) {									//reads code characters from codefile.txt
	int index;
	FILE *codefile;

	if (!(codefile = fopen("codefile.txt", "r"))) {					//test for file open error
		printf("Code file could not be opened.\n");
		exit(1);
	}
	else {

		for (index = 0; index < CODEARRAY; index++) {				//puts codefile info into codeArray
			codeArray[index] = getc(codefile);

			//printf("%c", codeArray[index]);						 //test for codeArray success
		}
		fclose(codefile);
	}
}

void getMessage(int messageArray[]) {								//put msgfile info into messageArray
	int index;
	FILE *messagefile;

	if (!(messagefile = fopen("msgfile.txt", "r"))) {				//test for file open error
		printf("Message file could not be opened.\n");
		exit(1);
	}
	for (index = 0; index < MESSAGEARRAY; index++) {
		fscanf(messagefile, "%5d", &messageArray[index]);
	}
}

int sortMessage(int messageArray[])									//sorts message in ascending order
{
	qsort(messageArray, MESSAGEARRAY, sizeof(int), compare);
	/*for (int index = 0; index < MESSAGEARRAY; index++) {			//tester for array sorting success
		printf("%d ", messageArray[index]);
	}*/
	return 0;
}

int compare(const void *p, const void *q)							//qsort function ascending order
{
	if (*(int *)p < *(int *)q) {
		return -1;
	}
	return *(int *)p > *(int *)q;
}

char decodeMessage(int messageArray[], char codeArray[]) {			//truncates sorted numbers, prints code with message as index, outputs to csis file
	FILE *outFile;

	if (!(outFile = fopen("csis.txt", "w"))) {						//test for file open error
		printf("Output file could not be opened.\n");
		exit(1);
	}

	for (int index = 0; index < MESSAGEARRAY; index++) {			//modulus "cutting" phase
		messageArray[index] = (messageArray[index]) % 100;
		printf("%c", codeArray[messageArray[index]]);				//prints to console
		fprintf(outFile, "%c", codeArray[messageArray[index]]);		//outputs to csis.txt
	}
	
	fclose(outFile);

	return 0;
}
	