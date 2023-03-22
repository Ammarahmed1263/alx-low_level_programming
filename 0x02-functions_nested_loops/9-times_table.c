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
			if (i * (j + 1) / 10 == 0)
				printf("%i,  ", i * j);
			else
				printf("%i, ", i * j);
		printf("%i\n", 9 * i);
	}
		
}
