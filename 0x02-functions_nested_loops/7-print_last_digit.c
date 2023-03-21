#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: number to use
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int result = n % 10;

	_putchar(result + '0');
	return (result);
}
