#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two integers
 * @a: first int
 * @b: second int
 *
 * Return: the sum of the two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts b from a
 * @a: first int
 * @b: second int
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 *
 * Return: the product of the two ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: first int
 * @b: second int
 *
 * Return: the division of the two ints
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - get modulo of a / b
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of two ints division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
