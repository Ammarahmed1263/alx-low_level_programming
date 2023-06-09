#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates grid
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NULL on failure
 * or width, height equals zero
 * else return pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **ptt;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptt = (int **)malloc(height * sizeof(int *));

	if (ptt == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptt[i] = (int *)malloc(width * sizeof(int));

		if (ptt[i] == NULL)
		{
			for (k = 0; k < i ; k++)
				free(ptt[k]);
			free(ptt);
			return (NULL);
		}

		/* ptt[i][j] same as *(*(ptt + i) + j) */
		for (j = 0; j < width; j++)
			*(*(ptt + i) + j) = 0;
	}
	return (ptt);
}
