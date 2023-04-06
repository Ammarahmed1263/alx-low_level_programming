#include <stdio.h>
/**
  * check_prim - checks recursively the input from is_prime_number
  * @i: iterator
  * @n: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int check_prim(int n, int i)
{
	if (n % i == 0 || n < 2)
		return (0);
	else if (i == n - 1)
		return (1);
	else if (n > i)
		return (checker(n, i + 1));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: number to check
  * Return: 1 if n is a prime, else return 0
  */
int is_prime_number(int n)
{
	return (checker(n, 2));
}
