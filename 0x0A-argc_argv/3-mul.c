#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
