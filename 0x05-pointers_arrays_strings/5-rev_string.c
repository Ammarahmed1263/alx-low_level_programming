#include "main.h"
/**
 * rev_string - reverses given string
 * @s: pointer to string
 *
 */

void rev_string(char *s)
{
	char *i;
	int len = 0, temp, j;

	for (i = s; *i != '\0'; i++)
		len++;

	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - 1 - j];
		s[len - 1 - j] = temp;
	}
}
