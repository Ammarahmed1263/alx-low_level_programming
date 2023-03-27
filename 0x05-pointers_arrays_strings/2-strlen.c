#include "main.h"
/**
 * _strlen - prints length of string
 * @s: pointer to string
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	char *i;
	int counter = 0;

	for (i = s; *i != '\0'; i++)
		counter++;

	return (counter);
}
