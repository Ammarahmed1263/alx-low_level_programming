
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to string of 0 and 1
 *
 * Description: converts input string into
 * an unsigned integer value
 *
 * Return: 0 if empty string or string contains
 * non 0 or 1 character and the converted number
 * otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0, base = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}

	i--;

	while (i >= 0)
	{
		sum += base * (b[i--] - '0');
		base *= 2;
	}

	return (sum);
}

