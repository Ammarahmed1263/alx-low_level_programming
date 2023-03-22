#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count to 98
 * @n: start of counting`
 */

void print_to_98(int n)
{
	int i, j;

	if (n < 98)
		for (i = n; i < 98; i++)
			printf("%i, ", i);
	else if (n > 98)
		for (j = n; j > 98; j--)
			printf("%i, ", j);

	printf("98\n");
}
