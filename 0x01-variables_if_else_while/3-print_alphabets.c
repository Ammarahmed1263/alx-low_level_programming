#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'Z'; i++)
	{
		putchar(i);

		if (i == 'z')
			i -= 39;

	}

	for (i = 'A'; i < 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
