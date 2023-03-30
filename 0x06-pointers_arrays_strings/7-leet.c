#include "main.h"
/**
 * leet - change specific letters
 * @str: string to edit
 *
 * Return: edited string
 */

char *leet(char *str)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s1[j] == str[i])
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
