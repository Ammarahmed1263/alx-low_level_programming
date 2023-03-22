#include <stdio.h>
/**
 * times_table - prints table 9
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j < 9; j++)
			printf("%i, ", i * j);
		printf("%i$\n", 9 * i);
	}
		
}
