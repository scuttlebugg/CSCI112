//THIS CODE IS INCOMPLETE AND BROKEN


#include <stdio.h>

//int displayGrid();
//promptUser();

int main() {
	int x = 1, o = 2;
	char a, b, c, d, e, f, g, h, i;
	char userSelection;

	a = 'a';
	b = 'b';
	c = 'c';
	d = 'd';
	e = 'e';
	f = 'f';
	g = 'g';
	h = 'h';
	i = 'i';

	while (!((a == b && b == c) || d == e == f || g == h == i || a == d == g || a == e == i || c == e == g || a == d == g || b == e == h || c == f == i)) {

		printf("%c %c %c\n%c %c %c\n%c %c %c\n", a, b, c, d, e, f, g, h, i);

		printf("Player 1, enter a location.\n");
		scanf(" %c", &userSelection);

		if (userSelection == a)
		{
			a = 'X';
		}
		else if (userSelection == b)
		{
			b = 'X';
		}
		else if (userSelection == c)
		{
			c = 'X';
		}
		else if (userSelection == d)
		{
			d = 'X';
		}
		else if (userSelection == e)
		{
			e = 'X';
		}
		else if (userSelection == f)
		{
			f = 'X';
		}
		else if (userSelection == g)
		{
			g = 'X';
		}
		else if (userSelection == h)
		{
			h = 'X';
		}
		else if (userSelection == i)
		{
			i = 'X';
		}
		else
		{
			printf("Follow directions, please.\n");
		}

		printf("%c %c %c\n%c %c %c\n%c %c %c\n", a, b, c, d, e, f, g, h, i);

		printf("Player 2, enter a location.\n");
		scanf(" %c", &userSelection);

		if (userSelection == a)
		{
			a = 'O';
		}
		else if (userSelection == b)
		{
			b = 'O';
		}
		else if (userSelection == c)
		{
			c = 'O';
		}
		else if (userSelection == d)
		{
			d = 'O';
		}
		else if (userSelection == e)
		{
			e = 'O';
		}
		else if (userSelection == f)
		{
			f = 'O';
		}
		else if (userSelection == g)
		{
			g = 'O';
		}
		else if (userSelection == h)
		{
			h = 'O';
		}
		else if (userSelection == i)
		{
			i = 'O';
		}
		else
		{
			printf("Follow directions, please.\n");
		}
	}

	printf("Game over, someone won!");

	return 0;
}

int printGrid() {

}

