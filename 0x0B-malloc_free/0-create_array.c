#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates intialized array
 * @size: number of elements in the array
 * @c: char to intialize array with
 *
 * Return: null of size is zero or
 * can't create pointer alse return
 * pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pt;

	if (size == 0)
		return (NULL);

	pt = (char *)malloc(sizeof(char) * size);

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(pt + i) = c;

	return (pt);
}
