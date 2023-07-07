#include "main.h"

/**
 * get_bit - finds bit at nth position
 * @n: input decimal to search
 * @index: index of required digit
 *
 * Description: this functions returns
 * bit value at given index from the given
 * integer
 *
 * Return: the value of bit in given index or
 * -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int temp;

	if (index >= sizeof(n) * 8)
		return (-1);

	temp = index;
	while (temp > 0)
	{
		n = n >> 1;
		temp--;
	}
	return (n & 1);
}
