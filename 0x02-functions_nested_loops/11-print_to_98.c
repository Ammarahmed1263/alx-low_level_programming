#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count to 98
 *
 */

void print_to_98(int n)
{
	int i, j;

	if (n == 98)
	{
		printf("%i", n);
	}
	else if ( n < 98)
		for (i = n; i < 98; i++)
			printf("%i, ", i);
	else
		for (j = n; j > 98; j--)
			printf("%i, ", j);
}
