#include "main.h"
/**
 * _memset - fills n bytes in s
 * @s: location to fill
 * @b: constant to fill with
 * @n: number of bytes to fill
 *
 * Return: location of new bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
