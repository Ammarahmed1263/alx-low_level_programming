#include "main.h"
/**
 * print_diagonal - prints diagonally
 *@n: height
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	} print_diagonalelse
		_putchar('\n');
}
