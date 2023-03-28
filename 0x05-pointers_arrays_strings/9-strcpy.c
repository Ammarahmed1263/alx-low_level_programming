#include "main.h"
/**
 * _strcpy - copy src into des
 * @dest: where to copy
 * @src: from where to copy
 *
 * Return: pointer to new string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return dest;
}
