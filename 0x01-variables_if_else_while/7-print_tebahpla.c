#include <stdio.h>
/**
 * main - alphabets reversed
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
