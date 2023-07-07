#include "main.h"

/**
 * clear_bit - finds bit at nth position
 * @n: input decimal to search
 * @index: index of required digit
 *
 * Description: this functions clears
 * bit value at given index from the given
 * integer
 *
 * Return: 1 on success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
