#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - alocats and intializes block of memory
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: null if size is 0 or it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for(i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	
	return (ptr);
}
