#include <stdio.h>

#define LIMIT 5

int main() {
	int buffer[LIMIT] = { 1, 3, 5, 7, 11 };
	int *ptr;
	ptr = buffer;

	printf("%12s %12s %12s %12s\n\n", "Index", "Value", "Address", "SizeOf()");

	for (int counter = 0; counter < LIMIT; counter++) {
		printf("[%12d] [%12d] [%12p] [%12d]\n", counter, buffer[counter], &buffer[counter], sizeof(buffer[counter]));
	}

	printf("%12s %12s %12s\n\n", "Index", "Address", "Value");

	for (int index = 0; index < LIMIT; index++) {

		printf("*ptr+%d %12p %12d\n", index, ptr + index, *(ptr + index));
	}

	return 0;
}

