#include "main.h"
/**
 * reverse_array - reverses given array
 * @a: pointer to array
 * @n: array size
 *
 */

void reverse_array(int *a, int n)
{
	int temp, j;
	
	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
