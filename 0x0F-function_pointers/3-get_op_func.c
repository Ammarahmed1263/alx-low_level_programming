#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - chooses operation to do
 * @s: string with operation
 *
 * Return: pointer to another function
 * which takes two integer arguments as
 * input and returns an integer argument
 * as output
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
