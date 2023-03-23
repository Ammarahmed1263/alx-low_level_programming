#include "main.h"
/**
 * print_triangle - prints triangle of hash
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
        	for (int i = 0; i < size; i++)
        	{
        	        for (int j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}

        	        for (int k = 0; k < i + 1; k++)
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
