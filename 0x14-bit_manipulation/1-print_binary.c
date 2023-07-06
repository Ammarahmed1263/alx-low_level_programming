#include "main.h"

/**
 * print_binary - prints binary of decimal
 * @n: decimal to be converted
 *
 * Description: this function takes an
 * integer and returns its binary representation
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
