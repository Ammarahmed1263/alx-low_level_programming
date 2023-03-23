#include "main.h"
/**
 * _isdigit - check if digit
 *@c: digit to be checked
 *
 * Return: 1 if lower else 0
 */

int _isdigit(int c)
{
	int i, counter = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
			counter++;
	}

	if (counter != 0)
		return (1);
	return (0);
}
