#include "main.h"
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

	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
