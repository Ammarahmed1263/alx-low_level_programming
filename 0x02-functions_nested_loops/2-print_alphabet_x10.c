#include "main.h"
/**
 * print_alphabet_x10 - print alpha 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
