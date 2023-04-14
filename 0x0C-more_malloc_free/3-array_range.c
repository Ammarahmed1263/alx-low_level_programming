#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - returns array in given range
 * @min: first int
 * @max: last int
 *
 * Return: in success pointer to allocated array
 * at fail or min > max returns null
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	ptr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (min > max || !ptr)
		return (NULL);

	for (i = 0; i != max + 1; i++)
		ptr[i] = min + i;

	return (ptr);
}
