#include "main.h"
/**
 * _islower - check if lower alpha
 *@c: alpha to be checked
 *
 * Return: 1 if lower else 0
 */

int _islower(int c)
{
	int i, counter = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			counter++;
	}
	
	if (counter != 0)
		return (1);
	return 0;
}
