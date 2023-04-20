#include "function_pointers.h"
/**
 * array_iterator - applies function on all array elements
 * @array: array to be iterated
 * @size: size of array
 * @action: function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action || size <= 0)
		return;

	for (i = 0; i < 5; i++)
		action(array[i]);
}
