#include "main.h"
/**
 * factorial - return factorial of n
 * @n: number to find its factorial
 *
 * Return: -1 in error else return
 * factorial * n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
