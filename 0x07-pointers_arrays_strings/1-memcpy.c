#include "main.h"
/**
 * _memscpy - copies n bytes in s
 * @dest: destination to copy to
 * @src: source to fill from
 * @n: number of bytes to copy
 *
 * Return: destination after changes done
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
