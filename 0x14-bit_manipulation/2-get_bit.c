#include "main.h"
/**
 * get_bit - return value of bit at given index
 * @n: input number
 * @index: place of bit
 *
 * Return: value of bit on succes and -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
