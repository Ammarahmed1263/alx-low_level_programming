#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - check that malloc works
 * @b: size of malloc
 *
 * Return: in success pointer to allocated memory
 * at fail returns 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return ptr;
