#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 always
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
