#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - add s1 to s2 for n bytes
 * @s1: string to add to
 * @s2: string to add
 * @n: number of characters to conc
 *
 * Return: pointer to result string on success
 * and NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len, s2_len; 
	char *ptr;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	
	if (n >= s2_len)
	{
		ptr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * (s1_len + n + 1));
	}

	if (!ptr)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		ptr[i++] = s2[j];

	ptr[i] = '\0';
	return (ptr);
}
