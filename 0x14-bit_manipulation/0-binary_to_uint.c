#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string input
 *
 * Return: the converted number on success
 * or zero if null or one or more character
 * not equal to zero or one
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, index = 0;

	if(!b)
		return (0);

	while (b[index])
	{
		if ((b[index] != '0') && (b[index] != '1'))
			return (0);

		n <<= 1;
		n += b[index] - '0';
		index++;
	}

	return (n);
}
