#include "main.h"
/**
 * _puts - prints length of string
 * @str: pointer to string
 *
 * Return: string
 */

void _puts(char *str)
{
	char *i;

	for (i = str; *i != '\0'; i++)
		_putchar(*i);

	_putchar('\n');
}
