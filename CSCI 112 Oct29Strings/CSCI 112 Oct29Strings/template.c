#include <stdio.h>
#include <string.h>

void printEFrequency(messageString);

int main(void) {
	int counter = 0;
	char messageCharacters[] = { 'H', 'E', 'L', 'L', 'O', '\0' };
	printf(messageCharacters);

	printf("\n");

	char messageString[] = { "Hello." };
	printf("Your string message has %d characters.", strlen(messageString));
	
	for (int index = 0; index < sizeof(messageString); index++) {
		if (messageString[index] == 'l') {
			counter++;
		}
	}
	printf("\nThere are %d letter 'l' in your string", counter);

	return 0;
}