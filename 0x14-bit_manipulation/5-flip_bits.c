#include "main.h"

/**
 * flip_bits - count different bits
 * @n: first number
 * @m: second number
 *
 * Description: counts how many bits to
 * flip to convert n to m
 *
 * Return: number of bits to convert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int counter = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			counter++;
		n >>= 1;
		m >>= 1;
	}

	return (counter);
}
