#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: multidimension array input
 * @size: number of rows or columns
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				d1 += *(a + (i * size + j));

			if (i + j == size - 1)
				d2 += *(a + (i * size + j));
		}
	}
	printf("%i, %i\n", d1, d2);
}
