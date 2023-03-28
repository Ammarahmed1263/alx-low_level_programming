#include "main.h"
/**
 * puts2 - print string one after another
 * @str: pointer to string
 *
 */

void puts2(char *str)
{
	char *i;

	for (i = str; *i != '\0'; i += 2)
	{
		_putchar(*i);

		if (i++ == '\0')
			break;
	}

	_putchar('\n');
}
