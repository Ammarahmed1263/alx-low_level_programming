#include "main.h"
/**
 * _strncat - add src to dest for n bytes
 * @dest: string to add to
 * @src: string to add
 * @n: number of bytes
 *
 * Return: result string
 */

char *_strncat(char *dest, char *src, int n)
{
	int end, start, dest_len = 0;

	for (end = 0; dest[end] != '\0'; end++)
		dest_len++;

	for (start = 0; start < n && src[start] != '\0'; start++)
		dest[dest_len + start] = src[start];

	dest[dest_len + start] = '\0';

	return (dest);
}
