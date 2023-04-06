#include "main.h"
/**
 * _puts_recursion - puts string characters with recursion
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
