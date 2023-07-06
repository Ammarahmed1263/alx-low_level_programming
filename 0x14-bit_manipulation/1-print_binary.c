#include "main.h"

/**
 * print_binary - prints binary of decimal
 * @n: decimal to be converted
 *
 * Description: this function takes an 
 * integer and returns its binary representation
 */
int counter = 0;
void print_binary(unsigned long int n)
{
	if (!n)
	{
		if (!counter)
			_putchar('0');

		return;
	
	}
	counter++;
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
