#include "main.h"
/**
 * main - print alpha
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i < 'z')
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
