#include "main.h"
/**
 * _isalpha - check if alpha
 *@c: alpha to be checked
 *
 * Return: 1 if alpha else return 0
 */

int _isalpha(int c)
{
	int i, counter = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c || i - 32 == c)
			counter++;
	}
	
	if (counter != 0)
		return (1);
	return (0);
}
