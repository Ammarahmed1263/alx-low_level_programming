#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - operates or other files
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int op_1, op_2;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_1 = atoi(argv[1]);
	op_2 = atoi(argv[3]);
	sign = argv[2];

	if (!get_op_func(sign) || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' && op_2 == 0) || (*sign == '%' && op_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", (*get_op_func(sign))(op_1, op_2));
	return (0);
}
