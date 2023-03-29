#include "main.h"
/**
 * _strncpy - copy src into des for n bytes
 * @dest: where to copy
 * @src: from where to copy
 * @n: number of bytes
 *
 * Return: pointer to new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
