#include "main.h"
#include <stdio.h>

/**
 * main - prints first argument name
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
