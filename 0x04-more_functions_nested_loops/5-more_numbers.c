#include "main.h"
/**
 * more_numbers - print from 0 to 14
 *
 * Description: print from 0 to 14
 * 10 times
 *
 * Return: numbers
 */

void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(i + '0');

		_putchar('\n');
	}
}
