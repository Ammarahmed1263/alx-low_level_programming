#include <stdio.h>
/**
 * print_array - print subarray
 * @a: array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i < n - 1)
			printf(", ");
	}
}
