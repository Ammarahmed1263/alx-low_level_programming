#include "main.h"
/**
 * _strcat - add src to dest
 * @dest: string to add to
 * @src: string to add
 *
 * Return: result string
 */

char *_strcat(char *dest, char *src)
{
	int end, start;

	for (end = 0; dest[end] != '\0'; end++)
		continue;

	for (start = 0; src[start] != '\0'; start++)
		dest[end + start] = src[start];

	return (dest);
}
