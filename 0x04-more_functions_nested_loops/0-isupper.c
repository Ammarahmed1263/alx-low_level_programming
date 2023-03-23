#include "main.h"
/**
 * _isupper - check if upper alpha
 *@c: alpha to be checked
 *
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	int i, counter = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			counter++;
	}

	if (counter != 0)
		return (1);
	return (0);
}
