#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	scanf ("%i %i %i %i", &x1, &y1, &x2, &y2);

	printf ("%i", abs ((x1 - x2) + (y1 - y2)));

	return 0;
}
