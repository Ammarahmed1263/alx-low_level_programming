#include "main.h"
/**
 * puts_half - prints second half
 * @str: pointer to string
 *
 */

void puts_half(char *str)
{
	char *i;
	int len = 0, j, n;

	for (i = str; *i != '\0'; i++)
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (j = n; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}
