#include <stdio.h>
/**
 * main - print to stderr
 *
 * Return: 1 always
 */
int main(void)
{
	write(stdout, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
