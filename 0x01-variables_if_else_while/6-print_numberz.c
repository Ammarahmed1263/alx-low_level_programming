#include <stdio.h>
/**
 * main - prints numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
