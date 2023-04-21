#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all function arguments
 * @n: first argument
 *
 * Return: the sum of all elements
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ar, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(ar, int);
		i++;
	}
	return (sum);
	va_end(ar);
}
