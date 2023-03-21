#include "main.h"
/**
 * main - print alpha 10 times
 *
 * Return: 0 always
 */

void print_alphabet(void)
{
        int i = 'a';

        for(j = 0; j < 10; j++)
	{
		while (i < 'z')
        	{
                	_putchar(i);
        	}
        	_putchar('\n');
	}

        return (0);
}
