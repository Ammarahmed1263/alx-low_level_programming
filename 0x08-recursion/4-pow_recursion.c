#include "main.h"
/**
 * _pow_recursion - return x^y
 * @x: number to find its power
 * @y: power
 *
 * Return: -1 in error else return
 * base* less y power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
