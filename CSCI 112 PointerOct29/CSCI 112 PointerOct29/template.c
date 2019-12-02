#include <stdio.h>

int main(void) {

	int buffer[] = { 1, 2, 3 };
	//display without square brackets

	void displayValues(int *buffer, int SIZE);


	return 0;
}

void displayValues(int *buffer, int SIZE)
{
	for (int index = 0; index < SIZE; index++) {
		printf("%d", (*buffer++));
	}
}