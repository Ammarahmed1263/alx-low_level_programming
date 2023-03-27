#include "main.h"
/**
 * print_rev - prints reverse of string
 * @s: pointer to string
 *
 */

void print_rev(char *s)
{
	char *i;

	for (i = s; *i != '\0'; i++)
		continue;

	i--;

	while (i >= s)
	{
		_putchar(*i);
		i--;
	}

	_putchar('\n');
}
