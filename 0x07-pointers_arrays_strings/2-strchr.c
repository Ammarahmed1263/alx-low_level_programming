#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for char
 * @s: string to search in
 * @c: char to search for
 *
 * Return: rest of string when char found
 * else returns null
 */

char *_strchr(char *s, char c)
{
	int found;

	while (*s != '\0' || (*s == '\0' && c == '\0'))
	{
		if (*s == c)
		{
			found = 1;
			break;
		}
		s++;
	}
	if (found == 1)
		return (s);
	else
		return (NULL);
}
