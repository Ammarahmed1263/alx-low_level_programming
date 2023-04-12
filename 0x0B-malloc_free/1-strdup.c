#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - copies string to new pointer
 * @str: string to copy
 *
 * Return: NULL if can't create pointer
 * or given string is null
 * else return pointer to created array
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *pt;

	if (str == 0)
		return (NULL);

	pt = (char *)malloc(sizeof(char) * (strlen(str) + 1));

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < strlen(str) + 1; i++)
		*(pt + i) = *(str + i);

	return (pt);
}
