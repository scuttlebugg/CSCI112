#include <stdio.h>

int main(void) {
	int column1;
	float column2;
	char column3;

	FILE *fp;

	if (!(fp = fopen("input.txt", "r"))) {
		printf("File could not be opened.\n");
		exit(1);  //or return -1;
	}

	while (!feof(fp)) {
		fscanf(fp, "%d %f %c", &column1, &column2, &column3);
		printf("%d %.2f %c\n", column1, column2, column3);
	}

	fclose(fp);
	return 0;
}