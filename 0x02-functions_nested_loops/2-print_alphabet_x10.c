#include "main.h"
/**
 * print_alphabet - print alpha 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 'a', j;

	for (j = 0; j < 10; j++)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
