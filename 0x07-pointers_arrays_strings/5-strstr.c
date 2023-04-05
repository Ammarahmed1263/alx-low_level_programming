#include "main.h"
#include <stddef.h>
/**
 * _strstr - prints first occurence
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: string if found and null
 * if not
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, x, n_len = 0, h_len = 0, found = 0;

	for (i = 0; needle[i] != '\0'; i++)
		n_len++;

	for (i = 0; haystack[i] != '\0'; i++)
		h_len++;

	for (j = 0; j < h_len; j++)
	{
		if (n_len + j > h_len)
			return (NULL);

		if (haystack[j] == needle[0])
		{
			found++;
			for (x = 1; x < n_len; x++)
			{
				if (haystack[j + x] == needle[x])
					found++;
				else
					break;
			}
			if (found == n_len)
				return (needle);

			found = 0;
		}

	}
	return (NULL);
}
