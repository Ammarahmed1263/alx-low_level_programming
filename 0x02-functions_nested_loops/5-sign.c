#include "main.h"
/**
 * print_sign - check sign
 *@n: number to be checked
 *
 * Return: 1 if +ve 0 if zero -1 if -ve
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
