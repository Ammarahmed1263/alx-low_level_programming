#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints sum of arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
