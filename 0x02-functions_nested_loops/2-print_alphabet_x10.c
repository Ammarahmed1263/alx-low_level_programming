#include "main.h"
/**
 * print_alphabet - print alpha 10 times
 *
 */

void print_alphabet(void)
{
	int i = 'a', j;

	for (j = 0; j < 10; j++)
	{
		while (i < 'z')
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
