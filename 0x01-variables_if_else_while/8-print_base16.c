#include <stdio.h>
/**
 * main - prints hexadecimal
 *
 * Return: 0 always
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
