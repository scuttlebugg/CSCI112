#include <stdio.h>
#define BUFFERSIZE 10

void initializeArray(int[], const int);
void displayArray(int[], const int);

int main(void) {

	int buffer[BUFFERSIZE];
	initializeArray(buffer, BUFFERSIZE);
	displayArray(buffer, BUFFERSIZE);

	return 0;
}

void initializeArray(int lbuffer[], const int SIZE) {

								//initialize with a for loop
	for (int index = 0; index < SIZE; ++index) {
		lbuffer[index] = 0;
	}
}

void displayArray(int lbuffer[], const int SIZE) {
	for (int index = 0; index < SIZE; ++index) {
		printf("lbuffer[%d] = %d\n", index, lbuffer[index]);
	}
}