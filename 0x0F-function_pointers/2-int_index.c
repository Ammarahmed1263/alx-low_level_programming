#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: array to be iterated
 * @size: size of array
 * @cmp: compare function to apply
 *
 * Return: index of element in success
 * negative one in failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
