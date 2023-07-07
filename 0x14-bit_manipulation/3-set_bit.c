#include "main.h"

/**
 * set_bit - finds bit at nth position
 * @n: input decimal to search
 * @index: index of required digit
 *
 * Description: this functions sets
 * bit value at given index from the given
 * integer
 *
 * Return: 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
