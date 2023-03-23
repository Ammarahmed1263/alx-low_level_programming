#include "main.h"
/**
 * print_triangle - prints triangle of hash
 * @size: triangle height
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}

			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
