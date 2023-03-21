#include <stdio.h>
/**
 * print_last_digit - prints last digit
 * @n: number to use
 * Return: last digit
 */

int print_last_digit(int n)
{
	printf("%i", n % 10);
	return (n % 10);
}
