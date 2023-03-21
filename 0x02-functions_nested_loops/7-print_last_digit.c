#include <stdio.h>
/**
 * print_last_digit - prints last digit
 * @n: number to use
 * Return: last digit
 */

int print_last_digit(int n)
{
	int result = n % 10;

	putchar(result + '0');
	return (result);
}
