#include <stdio.h>
/**
  * check_root - find root recursively
  * @i: iterator
  * @n: base number to check
  * Return:square root of n
  */
int check_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (check_root(n, i + 1));
}
/**
  * _sqrt_recursion - return square root of number
  * @n: number to check
  * Return: square root of n
  */
int _sqrt_recursion(int n)
{
	return (check_root(n, 1));
}
