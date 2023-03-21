#include "main.h"
/**
 * _islower - check if alpha
 *@c: alpha to be checked
 *
 * Return: 1 if lower else return 0
 */

int _islower(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; j++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
