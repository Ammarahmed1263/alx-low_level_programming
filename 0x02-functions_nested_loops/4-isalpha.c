#include "main.h"
/**
 * _isalpha - check if alpha
 *@c: alpha to be checked
 *
 * Return: 1 if alpha else return 0
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; j++)
	{
		if (i == c || i - '32' == c)
			return (1);
	}
	return (0);
}
