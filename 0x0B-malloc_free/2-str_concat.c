#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - combines two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if can't create pointer
 * or given string is null
 * else return pointer to combined string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *pt;

	pt = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	
	if (pt == NULL)
		return (NULL);
	
	if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);
	else
	{

		for (i = 0; i < strlen(s1); i++)
			*(pt + i) = *(s1 + i);
		
		for (j = 0; j < strlen(s2) + 1; j++)
			*(pt + i + j) = *(s2 + j);
	
		return (pt);
	}
}
