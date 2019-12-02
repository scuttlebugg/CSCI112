#include <stdio.h>

#define ROW 2
#define COL 3

void initializeArray(int[][COL], const int);

int main() {
	int l_numbers[ROW][COL];
	initializeArray(l_numbers, ROW);
	return 0;
}

void initializeArray(int numbers[][COL], const int _ROW)
{
	for(int row = 0; row < _ROW; row++) {
		for (int column = 0; column < COL; column++) {
			numbers[row][column] = 0;
		}
	}
}