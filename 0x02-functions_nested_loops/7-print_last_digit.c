#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: number to use
 * Return: last digit
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result *= -1;

	_putchar(result + '0');
	return (result);
}
